/*1. Online Shopping Cart
 
Description: Build a simple e-commerce shopping cart system that allows users to browse products, add them to the cart, and checkout.
 
Classes:
        Product: Stores product information like name, price, and description.
        Cart: Manages the list of products added to the cart.
        Customer: Stores customer information such as name, address, and purchase history.
        Features: Display product catalog, handle discounts, calculate total price with tax and shipping. */

#include<iostream>
#include<string>
using namespace std;
const int k = 50;

class Product {
    string name;
    int price;
    string description;
public:
    void details();
    void show();
    string getname() const {
        return name;
    }

    double getprice() const {
        return price;
    }
};

void Product::details() {
    cout << "Name : ";
    cin >> name;
    cout << "Price : ";
    cin >> price;
    cout << "Description : ";
    cin.ignore();
    getline(cin, description);
}

void Product::show() {
    cout << "Name : " << name << endl;
    cout << "Price : " << price << endl;
    cout << "Description : " << description << endl;

}


class Cart: public Product {
    string itemname[k];
    int itemprice[k];
    int count = 0;
public:
    void add(const Product& p);
    void remove(const string pname);
    void displaycart();
    void checkout();

};
void Cart::add(const Product& p) {
    if (count < k) {
        itemname[count] = p.getname();
        itemprice[count] = p.getprice();

        count++;
        cout << "Product " << p.getname() << " Has Been Added\n";
    }
    else {
        cout << "Cart Full";
    }
}

void Cart::remove(const string pname) {
    int l = count;
    count = 0;
    int j = 0;
    for (int i = 0; i < l; i++) {
        if (itemname[i] != pname) {
            itemname[j] = itemname[i];
            itemprice[j] = itemprice[i];
            count++;
            j++;
        }
    }
}
void Cart::displaycart() {
    int sum = 0;
    cout << "Item     Price\n";
    for (int i = 0; i < count; i++) {
        cout << itemname[i] << "            " << itemprice[i] << endl;
        sum = sum + itemprice[i];
    }
    cout << "------------------------------------\n";
    cout << "Total Price    " << sum << endl;

}
//
//
class Customer :public Cart {
    string name[k];
    string address[k];
    int b = 0;
    public:
        void getdetail() {
            cout << "Enter Name : ";
            getline(cin, name[b]);

            cout << "Enter address : ";
            getline(cin, address[b]);
        }
       


};
//
class Features :public Cart {
public:
    void display(Product products[], int count);
    void discount();
    void total();
};

void Features::display( Product p[], int count) {
    cout << "Product Catalog:\n";
    for (int i = 0; i < count; i++) {
        cout << "Product Details " << i + 1 << ":\n";
        p[i].show();
    }
}
int main() {
    Product p[100];
    Cart c;
    Customer cust;
    Features feature;

    int x = 3;
    for (int i = 0; i < x; i++) {
        cout << "Enter Products\n";
        p[i].details();

    }
    for (int i = 0; i < 26; i++) {
        cout << "*";
    }
    cout << "\n";
    int m;
    string pname;
    string rname;
    do {
        cout << "Select the options: \n"
            <<"1)Product Catalog\n"
            << "2)Add Item to cart\n"
            << "3)Remove Item From Cart\n"
            <<"4)Display Cart\n"
            << "5)Enter Customer Detail\n"
            << "6)Checkout\n";
         cin >> m;
         switch (m) {
         case 1:
             cout << "Product Catalog: \n";
             for (int i = 0; i < x; i++) {
                 cout << "Product Details " << i + 1 << " \n";
                 feature.display(p,x);


             }
             break;
         case 2:
             cout << "Enter Product Name: ";

             cin.ignore();
             getline(cin, pname);

             for (int i = 0; i < x; i++) {
                 if (p[i].getname() == pname) {
                     c.add(p[i]);
                     break;
                 }
                 /* else {
                      cout << "Product Not Available\n";
                  }*/
             }
             break;
         case 3:
             cout << "Enter Product To be Removed: ";
             cin.ignore();
             getline(cin, rname);
             c.remove(rname);
             break;
         case 4:
             c.displaycart();



         case 5:
             cout << "Checkout ";
             c.checkout();
             cust.getdetail();
         }
    } while (m != 6);
}


//reference code

/*#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Product class to store product information
class Product {
public:
    string itemName; // Name of the product
    float price;     // Price of the product

    // Constructor to initialize product information
    Product(string i_name, float i_price)
        : itemName(i_name), price(i_price) {}
};

// Cart class to manage the list of products added to the cart
class Cart {
private:
    Product items[10]; // Fixed-size array to store products (up to 10 products)
    int itemCount;     // Count of items in the cart

public:
    Cart() : itemCount(0) {} // Constructor to initialize itemCount to 0

    // Function to add a product to the cart
    void addProduct(const Product& product) {
        if (itemCount < 10) {
            items[itemCount] = product; // Store a copy of the product
            itemCount++;
            cout << product.itemName << " added to the cart.\n";
        }
        else {
            cout << "Cart is full! Cannot add more products.\n";
        }
    }

    // Function to calculate total price with optional discount, tax, and shipping
    float calculateTotal(float discount = 0.0f, float taxRate = 0.0f, float shippingCost = 0.0f) {
        float total = 0.0f;
        for (int i = 0; i < itemCount; i++) {
            total += items[i].price; // Add the price of each product
        }
        total -= discount; // Apply discount
        total += total * taxRate; // Add tax
        total += shippingCost; // Add shipping cost
        return total;
    }

    // Function to display the products in the cart
    void displayCart() const {
        cout << "Items in Cart:\n";
        for (int i = 0; i < itemCount; i++) {
            cout << "- " << items[i].itemName << " | Price: $" << fixed << setprecision(2) << items[i].price << "\n";
        }
    }
};

// Function to display product catalog
void displayProducts(const Product products[], int productCount) {
    cout << "Product Catalog:\n";
    for (int i = 0; i < productCount; i++) {
        cout << i + 1 << ". " << products[i].itemName
            << " | Price: $" << fixed << setprecision(2) << products[i].price << "\n";
    }
}

// Main function to simulate the shopping cart system
int main() {
    const int MAX_PRODUCTS = 10; // Maximum number of products
    Product products[MAX_PRODUCTS] = {
        Product("Laptop", 999.99),
        Product("Smartphone", 499.99),
        Product("Headphones", 199.99)
    };

    int productCount = 3; // Actual number of products

    // Display product catalog
    displayProducts(products, productCount);

    // Create a shopping cart
    Cart cart;

    // Simulate adding products to the cart
    int choice;
    while (true) {
        cout << "Enter the product number to add to cart (0 to finish): ";
        cin >> choice;

        if (choice == 0) {
            break; // Exit if user enters 0
        }
        else if (choice > 0 && choice <= productCount) {
            cart.addProduct(products[choice - 1]); // Add selected product to the cart
        }
        else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    // Display cart items
    cart.displayCart();

    // Calculate total with optional discount, tax, and shipping
    float discount = 50.0f; // Example discount
    float taxRate = 0.08f;  // Example tax rate (8%)
    float shippingCost = 5.0f; // Example shipping cost

    float totalPrice = cart.calculateTotal(discount, taxRate, shippingCost);
    cout << "Total Price: $" << fixed << setprecision(2) << totalPrice << "\n";

    return 0;
}*/