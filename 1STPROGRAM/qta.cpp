//#include<iostream>
//using namespace std;



#include <stdio.h>

int main() {
    int num = 3333;
    printf("The prime factors are: ");
    if (num % 2 == 0) {
        printf("%d ", 2);
    }
    while (num % 2 == 0) {
        num = num / 2;

    }

    for (int i = 3; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
        while (num % i == 0) {
            num = num / i;
        }
      
    }
    return 0;
}


//int main() {
//	int a, b ,c ;
//	cin >> a >> b >>c;
//	int Largest;
//	if (a > b) {
//		if (a > c) {
//			 Largest = a;
//			
//		}
//		else{
//			 Largest = c;
//		}
//	}
//	else {
//		if (b > c) {
//			 Largest = b;
//		}
//		else {
//			 Largest = c;
//		}
//	}
//	cout << "Largest is" << Largest;
//}

//int main() {
//	int a, b ,c ;
//cin >> a >> b >> c;
//	int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
//	cout << "Largest is " << largest;
//}
















//int main() {
//	int number = -45;
//	if (number == 0) {
//		cout << "Number is zero";
//	}
//	else{
//		if (number > 0) {
//		cout << "Number is positive";
//		}
//		else
//			cout << "Number is Negative";
// }
//}

//int main() {
//	while (0) {
//		cout << "HelloWorld";
//	}
//}