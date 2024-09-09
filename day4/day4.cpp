#include<iostream>
using namespace std;





//Largest prime number under the given value - 1

//int main() {
//	int n;
//	int flag = 0;
//	cout << "Enter a value : ";
//	cin >> n;
//	if (n <= 2) {
//		cout << "No prime number";
//	}
//    for (int i = n - 1;i>=2; i--) {
//		flag = 0;
//		for (int j = 2; j <i; j++) {
//			if (i % j ==0) {
//				flag = 1;
//				break;
//			}	
//		}
//		
//		if (flag == 0) {
//			cout << i;
//			break;
//		}
//	
//
//		
//		
//	}
//}

//--------------------------------------------------------------------------------------------------

//Sum of digits -2



//int main() {
//	int num;
//	int sum = 0;
//	cout << "Enter a number: ";
//	cin >> num;
//	while (num != 0) {
//		sum = sum + num % 10;
//		num = num / 10;
//	}
//	cout << "Sum of digits is : " << sum;
//}

//--------------------------------------------------------------------------------------------------



//Sum of seires-3



//int main() {
//	int n;
//	int sum = 0;
//	cout << "Enter a number : ";
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cout << i << "*" << i << "=" << i * i << endl;
//		sum = sum + (i * i);
//	}
//	cout << "Sum of the series till " << n << " is : " << sum;
//}

//--------------------------------------------------------------------------------------------------




//Sum of series - 4
 
 

//int main() {
//	int n;
//	int sum = 0;
//	cout << "Enter a number : ";
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int sum1 = 0;
//		for (int j = 1; j <= i; j++) {
//			
//			
//			cout << j;
//				if (j < i) {
//					cout << "+" ;
//				}
//				
//				sum1 = sum1 + j;//sum for each line
//			sum = sum + j;//overall sum
//		}
//		cout << "=" << sum1;
//		cout << endl;
//	}
//		cout << "Sum of the series till " << n << " is : " << sum;
//	}

//-----------------------------------------------------------------------------------------------------




//non prime number from 1 to upperbound - 5
 


//int main() {
//	int uppbound;
//	int flag = 0;
//	cout << "Enter the upperbound: ";
//	cin >> uppbound;
//	/*if (uppbound > 1) {
//		cout << "1 ";
//	}*/
//
//	for (int i = 4; i <uppbound; i++) {
//		flag = 0;
//		for (int j = 2; j < i; j++) {
//			if (i % j == 0) {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1) {
//			cout << i << " ";
//		}
//	}
//}

//-------------------------------------------------------------------------------------


//Sum of series-6



//int main() {
//	int n;
//	int sum = 0;
//	
//	cout << "Enter a number : ";
//	cin >> n;
//	int num = 9;
//		for (int i = 1; i <= n; i++) {
//			cout << num;
//
//			sum = sum + num;
//			num = num * 10 + 9;
//			if (i < n) {
//				cout << " + ";
//			}
//		}
//	cout << endl;
//	cout << "Sum of the series for n = "  << n << " is : " << sum;
//}
//-------------------------------------------------------------------------------------------



// Counting Votes - 7
//int main() {
//
//	int arr[100];
//	cout << "Enter the number of voters: ";
//	int n;
//	cin >> n;
//	cout<<"Enter the vote for candidate 1 to 5: ";
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//
//	}
//	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, spoilt_count = 0;
//	for (int i = 0; i < n ; i++) {
//		switch (arr[i]) {
//		case(1):
//			count1++;
//			break;
//		case(2):
//			count2++;
//			break;
//		case(3):
//			count3++;
//			break;
//		case(4):
//			count4++;
//			break;
//		case(5):
//			count5++;
//			break;
//		default:
//			spoilt_count++;
//			break;
//
//		}
//				
//		
//		
//	}
//	cout << "Vote for 1: " << count1 << endl;
//	cout << "Vote for 2: " << count2 << endl;
//	cout << "Vote for 3: " << count3 << endl;
//	cout << "Vote for 4: " << count4 << endl;
//	cout << "Vote for 5: " << count5 << endl;
//	cout << "Spolit vote:" << spoilt_count << endl;
//}




//int main()
//{
//    const int num = 5;
//    int count[num] = { 0 };
//    int spoilt = 0;
//    int vote;
//
//    cout << "Enter the votes...\nEnter 0 to finish voting:\n";
//
//    while (true)
//    {
//        cin >> vote;
//
//        if (vote == 0)
//        {
//            break;
//        }
//
//        if (vote >= 1 && vote <= num)
//        {
//            count[vote - 1]++;
//        }
//        else
//        {
//            spoilt++;
//        }
//    }
//    cout << "\nElection Results:\n";
//    for (int i = 0; i < num; i++)
//    {
//        cout << "Candidate " << (i + 1) << ": " << count[i] << " votes\n";
//    }
//    cout << "Spoilt ballots: " << spoilt << "\n";
//
//    return 0;
//}

//------------------------------------------------------------------------------------------------------------

// consider address 1000

//int main() {
//    char a[] = "Hello Worldsss";  // Fixed typo in string
//    char b[50];
//    char* aa, * bb;
//    aa = a;
//    bb = b;
//
//    // Copy the string from a to b
//    while (*bb++ = *aa++);
//
//    // Print the copied string
//    printf("/%s\n", b);
//
//    return 0;
//}









