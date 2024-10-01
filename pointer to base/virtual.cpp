#include<iostream>
using namespace std;

class Base {
public:
	void show() { cout << "From Base class"<<endl; }
	virtual void print() = 0;
};

class Derived :public Base {
public:
	void show() { cout << "From Derived class"<<endl; }
	void print() { cout << "Derived class"; }
};
int main() {
	Base* ptr;
	/*Base obj;
	ptr = &obj;
	ptr->show();
	ptr->print();*/

	Derived dobj;
	ptr = &dobj;
	ptr->show();
	ptr->print();
}


