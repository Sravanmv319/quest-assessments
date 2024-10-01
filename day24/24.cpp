////Consider a shopping list of items for which we place an order with the dealer every month.
////The list includes details such as the code number and the price of each item.
////We would like to perform operations such as adding an item to the list,
////deleting an item from the list and printing the total value of the order.
////Design the software using a class with arrays as data members.
//#include <iostream>
//using namespace std;
//
//class List {
//private:
//	int code[20];
//	int price[20];
//	int c;
//public:
//	void count(void) { c = 0; }
//	void putdata();
//	void additem();
//	void remove();
//	void totalvalue();
//};
//void List::additem(){
//	cout << "Enter the code number: ";
//	cin >> code[c];
//	cout << "\nEnter the price: ";
//	cin >> price[c];
//	c++;
//	cout << "\n";
//}
//
//void List::putdata() {
//	for (int i = 0; i < c; i++) {
//		cout << "Code number " << i + 1 << " = "<<code[i]<<endl;
//		cout << "Price " << i + 1 << " = " << price[i]<<endl;
//
//	}
//	cout << "\n";
//}
//void List::totalvalue() {
//	int sum = 0;
//	
//	for (int i = 0; i < c; i++) {
//		sum += price[i];
//	}
//	cout << "Total Value= "<<sum;
//	cout << "\n";
//}
//void List::remove() {
//	int a;
//	cout << "Enter the item code removed: ";
//	cin >> a;
//	int j = 0;
//	int l = c;
//	c = 0;
//	for (int i = 0; i < l; i++) {
//			if (code[i] != a) {
//
//				code[j] = code[i];
//				price[j] = price[i];
//				j++;
//				c++;
//			}
//		
//	}
//
//}
//
//int main() {
//	List order;
//	order.count();
//	int x;
//	do {
//		cout << "Select an option: \n";
//		cout << "1)Add an Item \n";
//		cout << "2)Remove an Item \n";
//		cout << "3)Display the items \n";
//		cout << "4)Total Sum\n";
//		cout << "5)Exit\n";
//
//		cin >> x;
//
//		switch (x) {
//		case 1:
//			order.additem();
//			break;
//		case 2:
//			order.remove();
//			break;
//		case 3:
//			order.putdata();
//			break;
//		case 4:
//			order.totalvalue();
//			break;
//		case 5:
//			break;
//		default:
//			cout << "Enter a Valid Number.";
//			break;
//			
//		}
//	} while (x != 5);
//	return 0;
//
//}
//
