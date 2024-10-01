//Single Inheritance

//#include<iostream>
//using namespace std;
//public


//class B {
//	int a;
//public:
//	int b;
//	void ab();
//	int get_a();
//	void show_a();
//};
//
//class D :public B {
//	int c;
//public:
//	void mul();
//	void display();
//};
//void B::ab() {
//	cin >> a>>b;
//}
//int B::get_a() {
//	return a;
//}
//void B::show_a() {
//	cout << "a = " << a;
//}
//void D::mul() {
//	c = b * get_a();
//
//}
//void D::display() {
//	cout << "a b c are " << get_a()<<" " << b<<" " << c;
//}
//
//int main() {
//	D d;
//	B b;
//	d.ab();
//	d.show_a();
//	
//	d.mul();
//	d.display();
//
//	d.b = 10;
//	d.mul();
//	d.display();
//
//}





//private

//class B {
//	int a;
//public:
//	int b;
//	void getab();
//	int geta();
//	void showa();
//};
//
//class D :private B {
//	int c;
//public:
//	void mul();
//	void display();
//};
//
//void B::getab() {
//	cin >> a >> b;
//}
//int B::geta() {
//	return a;
//}
//
//void B::showa() {
//	cout <<"a = " << a;
//}
//
//void D::mul() {
//	getab();
//	c = b * geta();
//}
//
//void D::display() {
//	showa();
//	cout << "\na" << geta();
//	cout << "b " << b << " c" << c
//		;
//}
//
//int main() {
//	D d;
//	d.mul();
//	d.display();
//}