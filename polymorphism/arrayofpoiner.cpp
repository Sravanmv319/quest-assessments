//#include<iostream>
//#include<string.h>
//using namespace std;
//
//class city {
//protected:
//	char *name;
//	int len;
//	public:
//		city() {
//			len = 0;
//			name = new char[len+1];
//		}
//
//		void getname() {
//			char  *s;
//			s = new char[30];
//			cout << "Enter city name";
//			cin >> s;
//			len = strlen(s);
//			delete[] name;
//			name = new char[len + 1];
//			strcpy(s, name);
//			delete[] s;
//		}
//
//		void print() {
//			cout << name<<"\n";
//		}
//};
//
//
//
//int main() {
//	city  *cptr[10];
//
//	int n = 1;
//	int option;
//
//	do {
//		cptr[n] = new city;
//
//		cptr[n]->getname();
//		n++;
//		cout << "Enter more?\n";
//		cin >> option;
//
//	} while (option);
//
//	cout << "\n\n";
//	for (int i = 1; i < n; i++) {
//		cptr[i]->print();
//	}
//}
