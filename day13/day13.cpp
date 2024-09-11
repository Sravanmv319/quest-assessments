#include<iostream>
using namespace std;
#include<string>

//Write a function to remove given character from string
//(e.g.input: All the best"  if we want to remove 'e' then o/p
//	should be "All th bst"


//void remove(char *s, char a) {
//	int i = 0,j=0;
//	while (s[i] != '\0')
//	{
//		if (s[i] != a) {
//			s[j] = s[i];
//			j++;
//		}
//		i++;
//	}
//	s[j] = '\0';
//	cout << s;
//
//	
//}
//int main() {
//	char s[1000];
//	cout << "Enter a string : ";
//	cin.getline(s,1000);
//	char a;
//	cout << "Char to be removed :  ";
//	cin >> a;
//	remove(s, a);
//}


//----------------------------------------------------------------------------------------------------

//convert string into integer
//void convert(char* s) {
//	int l = strlen(s);
//	int a = 0;
//	
//	for (int i = 0; i < l; i++) {
//		if (s[i] >= '0' && s[i] <= '9') {
//			a= a*10 +  s[i] - '0';
//		}
//		/*else {
//			a = a*10 + s[i];
//		}*/
//	}
//
//		cout << a;
//}
//int main() {
//	char s[100];
//	cout << "Enter a String: ";
//	cin >> s;
//	convert(s);
//
//}



//----------------------------------------------------------------------------------------------------
//program non repeating char in a string
//void nonrepeat(char* s) {
//	int l = strlen(s);
//	
//	for (int i = 0; i < l; i++) {
//		int flag = 0;
//		for (int j = 0; j < l; j++) {
//			if (i!=j && s[i] == s[j]) {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0) {
//			cout << s[i];
//		}
//	}
//}
//int main() {
//	char s[100];
//	cin >> s;
//	nonrepeat(s);
//}



//----------------------------------------------------------------------------------------------------
//pattern printing
//void pattern(int num) {
//	for (int i = num; i > 0; i--) {
//		for (int j = 0; j < i; j++) {
//			cout << j+1;
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i <= num; i++) {
//		for (int j = 0; j < i; j++) {
//			cout << j + 1;
//		}
//		cout << endl;
//	}
//}
//int main() {
//	int a;
//	cin >> a;
//	pattern(a);
//}



//----------------------------------------------------------------------------------------------------
//sorting string
void sort(char* s) {
	int l = strlen(s);
	for (int i = 0; i < l; i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			s[i] = s[i] + 32;
		}
	}
	for(int i = 0; i < l; i++) {
		for (int j = 0; j < l-1-i; j++) {
			
			
			if (s[j] > s[j+1]) {
				char temp = s[j+1];
				s[j+1] = s[j];
				s[j] = temp;;


			}
		}
	}
	cout <<"Sorted : "<< s;
}
int main() {
	char s[100];
	cin >> s;
	sort(s);
}