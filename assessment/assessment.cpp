#include<iostream>
using namespace std;
//
//insertion sort
//int main() {
//	int arr[100];
//	int n;
//	cout << "Enter the number of Elements : ";
//	cin >> n;
//	cout << "Enter  Elements : ";
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//		int j, key, k;
//		for (j = 1; j < n; j++)
//		{
//			key = arr[j];
//			k = j - 1;
//
//			while (k >= 0 && arr[k] > key)
//			{
//				arr[k + 1] = arr[k];
//				k = k - 1;
//			}
//			arr[k + 1] = key;
//		}
//	
//	cout << "Sorted using Insertion sort : ";
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " ";
//	}
//}
//
////Bubblesort
////int main() {
////	int arr[100];
////	int n;
////	cout << "Enter the number of Elements : ";
////	cin >> n;
////	cout << "Enter  Elements : ";
////	for (int i = 0; i < n; i++) {
////		cin >> arr[i];
////	}
////	int i, j;
////	for (int i = 0; i < n-1; i++) {
////		for (j = 0; j < n-i-1; j++)
////		{
////			if (arr[j] > arr[j+1]) {
////				int temp = arr[j];
////				arr[j] = arr[j+1];
////				arr[j+1] = temp;
////				
////
////			}
////		}
////	}
////	cout << "Sorted using Bubble sort : ";
////	for (int i = 0; i < n; i++) {
////		cout << arr[i] << " ";
////	}
//
////}
//
//
////selection sort
//int main() {
//		int arr[100];
//		int n;
//		cout << "Enter the number of Elements : ";
//		cin >> n;
//		cout << "Enter  Elements : ";
//		for (int i = 0; i < n; i++) {
//			cin >> arr[i];
//		}
//		int i, j,temp;
//		
//		for (int i = 0; i < n-1; i++) {
//			int minindx = i;
//			for (j = i+1; j < n; j++)
//			{
//				if (arr[j]< arr[minindx] ) {
//					minindx = j;
//					
//	
//				}
//				
//			}
//			if (minindx != i) {
//				temp = arr[i];
//				arr[i] = arr[minindx];
//				arr[minindx] = temp;
//
//			}
//		}
//		cout << "Sorted using Selection sort : ";
//		for (int i = 0; i < n; i++) {
//			cout << arr[i] << " ";
//		}
//	
//	}