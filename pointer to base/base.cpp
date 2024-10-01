//#include<iostream>
//using namespace std;
//
//class Base {
//public:
//	int a;
//	int b;
//	/*void getdata();*/
//	void putdata();
//};
//void Base::putdata() {
//	cout << "Base Class: \n";
//	cout << "b=" << b;
//	cout << "\n";
//}
//class Derived : public Base {
//public:
//	int c;
//	void putdata();
//
//};
//void Derived::putdata() {
//	cout << "Derived Class:\n";
//	cout << "c=" << c;
//	cout << "\nBase Class:\n";
//	cout << "b=" << b;
//}
//int main() {
//	Base *ptr;//pointer created
//	Base obj;//object created
//	ptr = &obj; //pointing to the base class object
//	ptr->a=100;
//	ptr->b = 200;
//	ptr->putdata();
//
//	Derived dobj;
//	ptr = &dobj;
//	cout << "Using derived object\n";
//	/*ptr->c = 100;*/
//	ptr->b = 20;
//	ptr->putdata();
//
//	cout << "\n Accessing Data Member using derived pointer\n";
//
//	Derived* pptr;
//	pptr = &dobj;
//	pptr->c = 100;
//	pptr->b = 400;
//	pptr->putdata();
//
//
//	/*ptr->getdata();*/
//	
//}