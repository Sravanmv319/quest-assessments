#include<iostream>
using namespace std;

class myClass {
public:
	int array[3];

	myClass() {
		for (int i = 0; i < 3; i++) {
			cin >> array[i];
		}
	}
	void display(){
		for (int i = 0; i < 3; i++) {
			cout << array[i]<<" ";
		}
	}
};

int main() {
	myClass obj;
	obj.display();
	return 0;
}