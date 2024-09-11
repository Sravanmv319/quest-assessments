#include<iostream>
using namespace std;

//fib using recursion
//int fib(int n) {
//	if (n <= 0) {
//		return 0;
//	}
//	else if (n == 1) {
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//
//}
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cout << fib(i)<<" ";
//	}
//	
//}

//binary search

//int binarysearch( int arr[], int low, int high,int num) {
//	if (high >= low) {
//		int mid = (low + high) / 2;
//
//		if (num > arr[mid]) {
//			return binarysearch(arr, mid + 1, high, num);
//			
//		}
//		else if (num < arr[mid]) {
//			return binarysearch(arr, low, mid-1, num);
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main() {
//	
//	
//	int arr[100];
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	cout << "NUmber to be searched : ";
//	int a;
//	cin >> a;
//	int index = binarysearch( arr, 0, n - 1,a);
//	cout << index;
//}

//reverse a string using recursion
//void reverse(char* s,int i,int l) {
//	if (i == l) {
//		return;
//	}
//	char temp = s[i];
//	reverse(s, i+1, l);
//	cout <<temp;
//
//}
//int main() {
//	char a[100];
//	cin >> a;
//	char temp;
//	int i = 0;
//	int l = strlen(a);
//	reverse(a, i, l);
//	/*for (int i = l; i >=0; i--) {
//		temp = a[i];
//		cout << temp;
//	}*/
//	
//}

//swapping
void swap(int &a, int &b) {
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << " " << b;

}
int main() {
	int a, b;
	cin >> a >> b;
	swap(a, b);
}

//date
//void date(string n = "11", string s = "September", string year = "2024") {
//	cout << "Date is : " << " " << n << " " << s << " " << year ;
//
//}
//int main()
//{
//	date(/*"01", "April", "2021"*/);
//}

//area of shapes
//void area(string s, int a = 0, int b = 0) {
//	if (s == "square") {
//		cout << a * a;
//	}
//	else if (s == "rectangle") {
//		cout << a * b;
//	}
//	else if (s == "circle") {
//
//		cout << 3.14 * a * a;
//
//	}
//	else if (s == "triangle") {
//		cout << 0.5 * a * b;
//	}
//}
//int main() {
//	string s;
//	int a, b, r, h;
//	cin >> s;
//	if (s == "square") {
//		
//		cin >> a;
//		area("square",a);
//	}
//	else if (s == "rectangle"){
//
//		cin >> a >> b;
//		
//		area("rectangle",a,b);
//	}
//	else if (s == "circle"){
//
//		cin >> r;
//
//		area("circle", r);
//
//	}
//	else if (s == "triangle") {
//		cin >> b >>  h;
//		area("triangle",b, h);
//	}
//
//}

//employee

//void employee(string s = "name", int age = 0, string dept = "department") { cout << s << age << dept; }
//int main() {
//	string s;
//	cin >> s;
//	int age;
//	cin >> age;
//	string dept;
//	cin >> dept;
//	employee(s, age, dept);
//	cout << "Employee details : "  <<" "<< age<<" " << dept;
//}

//
//void employeeDetails1(int id=1, string position="Graduate Engineer", int age = 22, string name = "Sravan")
//{
//	cout << "Details of employee " << name << " are" << endl;
//	cout << "Name :" << name << endl;
//	cout << "Id :" << id << endl;
//	cout << "Position :" << position << endl;
//	cout << "Age :" << age << endl;
//}
//
//
//int main()
//{
//	string name, pos;
//	int id, age;
//	employeeDetails1();
//	return 0;
//}