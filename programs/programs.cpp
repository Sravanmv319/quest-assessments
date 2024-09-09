#include<iostream>
using namespace std;

//palindrome or not-(1)


//int main() {
//	int a;
//	cout << "Enter a number: "<<endl;
//	cin >> a;
//	int rev=0;
//	int num = a;
//	while (num != 0) {
//		rev = rev*10 + num % 10;
//		num = num / 10;
//
//	}
//	if (a == rev) {
//		cout << "Number is palindrome";
//	}
//	else
//		cout << "Not Palindrome";
//}

//---------------------------------------------------------------------------------------------------------




//alphabet or not-(2)


//int main() {
//	char a;
//	cout << "Enter a character: ";
//	cin >> a;
//	if (a >= 65&& a<=90|| a>= 97 && a<=122){
//		cout << "It is an alphabet";
//	}
//	else
//		cout << "Not an alphabet";
//}


//int main() {
//    char a;
//    cout << "Enter a character: ";
//    cin >> a;
//
//    switch (a) {
//    case 'A':
//    case 'a':
//        cout << "It is an alphabet";
//        break;
//    case 'B':
//    case 'b':
//        cout << "It is an alphabet";
//        break;
//    case 'C':
//    case 'c':
//        cout << "It is an alphabet";
//        break;
//    case 'D':
//    case 'd':
//        cout << "It is an alphabet";
//        break;
//    case 'E':
//    case 'e':
//        cout << "It is an alphabet";
//        break;
//    case 'F':
//    case 'f':
//        cout << "It is an alphabet";
//        break;
//    case 'G':
//    case 'g':
//        cout << "It is an alphabet";
//        break;
//    case 'H':
//    case 'h':
//        cout << "It is an alphabet";
//        break;
//    case 'I':
//    case 'i':
//        cout << "It is an alphabet";
//        break;
//    case 'J':
//    case 'j':
//        cout << "It is an alphabet";
//        break;
//    case 'K':
//    case 'k':
//        cout << "It is an alphabet";
//        break;
//    case 'L':
//    case 'l':
//        cout << "It is an alphabet";
//        break;
//    case 'M':
//    case 'm':
//        cout << "It is an alphabet";
//        break;
//    case 'N':
//    case 'n':
//        cout << "It is an alphabet";
//        break;
//    case 'O':
//    case 'o':
//        cout << "It is an alphabet";
//        break;
//    case 'P':
//    case 'p':
//        cout << "It is an alphabet";
//        break;
//    case 'Q':
//    case 'q':
//        cout << "It is an alphabet";
//        break;
//    case 'R':
//    case 'r':
//        cout << "It is an alphabet";
//        break;
//    case 'S':
//    case 's':
//        cout << "It is an alphabet";
//        break;
//    case 'T':
//    case 't':
//        cout << "It is an alphabet";
//        break;
//    case 'U':
//    case 'u':
//        cout << "It is an alphabet";
//        break;
//    case 'V':
//    case 'v':
//        cout << "It is an alphabet";
//        break;
//    case 'W':
//    case 'w':
//        cout << "It is an alphabet";
//        break;
//    case 'X':
//    case 'x':
//        cout << "It is an alphabet";
//        break;
//    case 'Y':
//    case 'y':
//        cout << "It is an alphabet";
//        break;
//    case 'Z':
//    case 'z':
//        cout << "It is an alphabet";
//        break;
//    default:
//        cout << "Not an alphabet";
//    }
//
//}
//-----------------------------------------------------------------------------------------------------------



//Minimum number of notes-(3)



//int main() {
//	int a;
//	int count = 0;
//	cout << "Enter the amount: ";
//	cin >> a;
//	while (a != 0) {
//		if (a >=500) {
//			a = a - 500;
//			count++;
//			cout << 500 << " ";
//		}
//		else if (a >=200 && a < 500) {
//			a = a - 200;
//			count++;
//			cout << 200 << " ";
//		}
//		else if (a >=100 && a < 200) {
//			a = a - 100;
//			count++;
//			cout << 100 << " ";
//		}
//		else if (a >=50 && a<100){
//			a = a - 50;
//			count++;
//			cout << 50 << " ";
//		}	
//
//	else if (a >=20&& a < 50) {
//			a = a - 20;
//		count++;
//		cout << 20 << " ";
//		}
//	else if (a >=10 && a < 20) {
//			a = a - 10;
//			count++;
//			cout << 10 << " ";
//		}
//	else if (a >=5 && a < 10) {
//			a = a - 5;
//			count++;
//			cout << 5 << " ";
//		}
//	else if (a >=2 && a < 5) {
//			a = a - 2;
//			count++;
//			cout << 2 << " ";
//		}
//	else {
//			a = a - 1;
//			count++;
//			cout << 1<< " ";
//		}
//
//	}
//	cout << endl;
//	cout << "Minimum number of notes required is : "<< count;
//}


//int main(){
//	int amount; int rem;
//	cout << "Enter the amount: ";
//	cin >> amount;
//	while (amount != 0) {
//		if (amount >= 500) {
//			cout << "Number of 500 is " << amount / 500 << endl;
//			amount = amount % 500;
//		}
//		else if (amount >= 200) {
//			cout << " Number of 200 is " << amount / 200 << endl;
//			amount = amount % 200;
//		}
//		else if(amount>=100){
//			cout << " Number of 100 is " << amount / 100 << endl;
//			amount = amount % 100;
//		}
//		else if (amount >= 50) {
//
//			cout << " Number of 50 is " << amount / 50 << endl;
//			amount = amount % 50;
//		}
//		else if (amount >= 20) {
//
//			cout << " Number of 20 is " << amount / 20 << endl;
//			amount = amount % 20;
//		}
//		else if (amount >= 10){
//
//			cout << " Number of 10 is " << amount / 10 << endl;
//			amount = amount % 10;
//		}
//		else if (amount >= 5) {
//
//			cout << " Number of 5 is " << amount / 5 << endl;
//			amount = amount % 5;
//		}
//		else if (amount >= 2) {
//
//			cout << " Number of 2 is " << amount / 2 << endl;
//			amount = amount % 2;
//		}
//		else if (amount>=1){
//
//			cout << " Number of 1 is " << amount / 1 << endl;
//			amount = amount % 1;
//		}
//	}
//	}

//------------------------------------------------------------------------------------------------------------

//Primefactors-(4)

//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    cout << "Prime Factors are: ";
//    if (num % 2 == 0) {
//        cout << 2;
//    }
//    while (num % 2 == 0) {
//        num = num / 2;
//
//    }
//
//    for (int i = 3; i <= num; i++) {
//        if (num % i !=0){
//            continue;
//        }
//        while (num % i == 0) {
//            num = num / i;
//        }
//        cout<<endl;
//        cout << i;
//
//    }
//    return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//	int number, i = 2;
//	cout << "enter any number: ";
//	cin >> number;
//	cout << "Prime factors of " << number << "  are: ";
//	while (number > 1)
//	{
//		bool printed = false;
//		while (number % i == 0)
//		{
//			if (!printed)
//			{
//				cout << i << endl;
//				printed = true;
//			}
//			number = number / i;
//			continue;
//		}
//		i = i + 1;
//	}
//	return 0;
//
//}
//-------------------------------------------------------------------------------------------------------------