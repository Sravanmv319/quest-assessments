//#include <iostream>
//#include <string>
//using namespace std;
//
//const int k = 50; 
//const double TAX_RATE = 0.08; 
//const double SHIPPING_COST = 5.00; 
//
//class Product {
//    string name;
//    double price; 
//    string description;
//public:
//    void details();
//    void show() const;
//    string getname() const { return name; }
//    double getprice() const { return price; }
//};
//
//void Product::details() {
//    cout << "Name: ";
//    cin >> ws; 
//    getline(cin, name);
//    cout << "Price: ";
//    cin >> price;
//    cout << "Description: ";
//    cin.ignore();
//    getline(cin, description);
//}
//
//void Product::show() const {
//    cout << "Name: " << name << "\nPrice: " << price << "\nDescription: " << description << endl;
//}
//
//class Cart {
//    string itemname[k];
//    double itemprice[k];
//    int count = 0;
//public:
//    void add(const Product& p);
//    void remove(const string& pname);
//    void displaycart() const;
//    double calculateTotal(double discount) const; 
//    void checkout(double discount) const; 
//};
//
//void Cart::add(const Product& p) {
//    if (count < k) {
//        itemname[count] = p.getname();
//        itemprice[count] = p.getprice();
//        count++;
//        cout << "Product " << p.getname() << " has been added.\n";
//    }
//    else {
//        cout << "Cart is full.\n";
//    }
//}
//
//void Cart::remove(const string& pname) {
//    for (int i = 0; i < count; i++) {
//        if (itemname[i] == pname) {
//            for (int j = i; j < count - 1; j++) {
//                itemname[j] = itemname[j + 1];
//                itemprice[j] = itemprice[j + 1];
//            }
//            count--;
//            cout << "Product " << pname << " has been removed.\n";
//            return;
//        }
//    }
//    cout << "Product " << pname << " not found in cart.\n";
//}
//
//void Cart::displaycart() const {
//    if (count == 0) {
//        cout << "Cart is empty.\n";
//        return;
//    }
//
//    cout << "Item                Price\n";
//    for (int i = 0; i < count; i++) {
//        cout << itemname[i] << "         " << itemprice[i] << endl;
//    }
//}
//
//double Cart::calculateTotal(double discount) const {
//    double sum = 0;
//    for (int i = 0; i < count; i++) {
//        sum += itemprice[i];
//    }
//    sum -= discount; 
//    sum += sum * TAX_RATE; 
//    sum += SHIPPING_COST; 
//    return sum;
//}
//
//void Cart::checkout(double discount) const {
//    double total = calculateTotal(discount);
//    cout << "------------------------------------\n";
//    cout << "Total Amount Due (after discount, tax, and shipping): " << round(total * 100) / 100 << endl;
//}
//
//class Customer {
//    string name;
//    string address;
//public:
//    void getdetail();
//    void showdetails() const;
//};
//
//void Customer::getdetail() {
//    cout << "Enter Name: ";
//    cin.ignore();
//    getline(cin, name);
//    cout << "Enter Address: ";
//    getline(cin, address);
//}
//
//void Customer::showdetails() const {
//    cout << "Customer Name: " << name << "\nAddress: " << address << endl;
//}
//
//class Features {
//public:
//    void display(const Product products[], int count); 
//    double applyDiscount(); 
//};
//
//void Features::display(const Product products[], int count) {
//    cout << "Product Catalog:\n";
//    for (int i = 0; i < count; i++) {
//        products[i].show();
//    }
//}
//
//double Features::applyDiscount() {
//    double discount = 0;
//    cout << "Enter discount amount: ";
//    cin >> discount;
//    return discount;
//}
//
//int main() {
//    Product products[100];
//    Cart cart;
//    Customer cust;
//    Features features;
//    cout << "Enter the number of products : ";
//    int x ;
//    cin >> x;
//    cout << endl;
//    for (int i = 0; i < x; i++) {
//        cout << "Enter Product " << i + 1 << " Details:\n";
//        products[i].details();
//    }
//
//    int option;
//    string pname, rname;
//
//    do {
//        cout << "\nSelect an option:\n"
//            << "1) Display Product Catalog\n"
//            << "2) Add Item to Cart\n"
//            << "3) Remove Item from Cart\n"
//            << "4) Display Cart\n"
//            << "5) Enter Customer Details\n"
//            << "6) Checkout\n"
//            << "7) Exit\n";
//        cin >> option;
//
//        switch (option) {
//        case 1:
//            features.display(products, x); 
//            break;
//        case 2:
//            cout << "Enter Product Name to Add: ";
//            cin >> ws; 
//            getline(cin, pname);
//            for (int i = 0; i < x; i++) {
//                if (products[i].getname() == pname) {
//                    cart.add(products[i]);
//                    break;
//                }
//            }
//            break;
//        case 3:
//            cout << "Enter Product Name to Remove: ";
//            cin >> ws;
//            getline(cin, rname);
//            cart.remove(rname);
//            break;
//        case 4:
//            cart.displaycart(); 
//            break;
//        case 5:
//            cust.getdetail(); 
//            break;
//        case 6: {
//            double discount = features.applyDiscount();
//            cart.checkout(discount); 
//            break;
//        }
//        case 7:
//            cout << "Exiting the program.\n";
//            break;
//        default:
//            cout << "Invalid option. Please try again.\n";
//            break;
//        }
//    } while (option != 7);
//
//    return 0;
//}