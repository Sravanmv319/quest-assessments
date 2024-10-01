


/*Class and Objects*/

#include<iostream>
using namespace std;
//class Name {
//	public: //access modifier
//		string firstname; //data member
//		void printname() // member function
//		{
//			cout << "First name is " << firstname;
//		}
//
//};
//int main() {
//	Name obj1; //declare the class
//	obj1.firstname = "Sravan"; //accessing datamember
//	obj1.printname(); //accessing member function
//	/*cout << obj1.firstname;*/
//	return 0;
//}


//(2)
class Name {
public:
	string name;
	int id;
	void printname();
	void printid()
	{
		cout << "Name id is " << id;
	
	}
};

void Name::printname() {
	cout << "First Name is " << name;
}

int main() {
	Name obj1;
	obj1.name = "Sravan";
	obj1.printname();
	cout << endl;
	obj1.id = 54;
	obj1.printid();
	return 0 ;

}