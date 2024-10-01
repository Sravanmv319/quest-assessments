//#include<iostream>
//using namespace std;
//
//class student {
//protected:
//	int rollnum;
//
//public:
//	void getroll();
//	void showroll();
//};
//
//void student::getroll() {
//	cin >> rollnum;
//}
//
//void student::showroll() {
//	cout << "Rollnumber = " << rollnum<<endl;
//}
//
//class test :public student {
//protected:
//	float sub1;
//	float sub2;
//
//public:
//	void getmark();
//	void showmark();
//};
//
//void test::getmark() {
//	cin >> sub1>>sub2;
//}
//
//void test::showmark() {
//	cout << "Sub 1 = " << sub1 << "\n Sub 2= " << sub2 << endl;
//}
//class result :public test {
//	float total;
//public:
//	void display();
//};
//
//void result::display() {
//	total = sub1 + sub2;
//	showroll();
//	showmark();
//	cout << "Total Mark is " << total;
//}
//
//int main() {
//	result r;
//	/*r.getroll();
//	r.showroll();
//
//	r.getmark();
//	r.showmark();
//
//	r.display();*/
//	r.getroll();
//	r.getmark();
//	r.display();
//}