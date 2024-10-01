//Create a base class called "shape".Use this class to store two double type values that could be used to compute the area of the
//figures.Derive two specific classes called "triangle" and "rectangle" from the base "shape".Add to the base class, a member function "get_data()" to initialize base class data members and another member function "display_area()" to compute and display the area of the
//figures.Make display_area() as virtual function and redefine this function in the derived class to suit their requirements.
//Using these three classes design a program that will accept dimensions of a triangle or rectangle interactively and display the area.

#include<iostream>
#include<string>
using namespace std;

class Shapes {

public:
	double a, b;
	void get_data();
	virtual void displayarea()=0;
};
void Shapes::get_data() {
	cout << "Enter the Side 1: ";
	cin >> a;
	cout << "Enter the Side 2: ";
	cin >> b;
}

class Rectangle :public Shapes {
public:
	void displayarea();
};
void Rectangle::displayarea() {
	cout << "Area of Rectangle is = " << a * b;
	cout << endl;
}
class Triangle :public Shapes {
public:
	void displayarea() override;
};
//void Triangle::get_data() {
//
//	cout << "Enter the Base: ";
//	cin >> a;
//	cout << "Enter the Height: ";
//	cin >> b;
//	cout << endl;
//};
void Triangle::displayarea() {

	cout << "Area of Triangle is  = " << 0.5 * a * b;
	cout << endl;
};

int main() {
	Shapes* ptr;
	Rectangle obj1;
	Triangle obj2;
	
	
	

	
	int x;
	
	do {
		cout << "Select The shapes:\n";
		cout << "1)Rectangle\n";
		cout << "2)Triangle\n";
		cout << "3}Exit\n";
		cin >> x;
		switch (x) {
		case 1:
			ptr = &obj1;
			ptr->get_data();
			ptr->displayarea();
			break;
		case 2:
			ptr = &obj2;
			ptr->get_data();
			ptr->displayarea();
			break;
		case 3:
			break;
		default:
			cout << "Enter a valid option\n";
		}

	} while (x != 3);


	return 0;
}