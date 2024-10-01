//Define a class to represent a bank account.Include the following members :
//
//Data Members
//
//1. Name of the depositor
//
//2. Account Number
//
//3. Type of Account
//
//4. Balance amount in the account
//
//Member Functions :
//
//1. To assign initial  values
//
//2. To deposit an amount
//
//3. To withdraw an amount after checking the balance
//
//4. To display name and balance
//
//Write a main program to test the program.

#include<iostream>
#include<string>
using namespace std;
class Bank {
	string Name;
	int accnum;
	string acctype;
	int bal;
public:
	void getdata();
	void putdata();
	void deposit(int amount);
	void withdraw(int amount);
};
void Bank:: deposit(int a) {
	if (a > 0) {
		bal = bal + a;
	}
	else {
		"enter a valid amount.";
	}

}

void Bank::getdata() {
	cout << "Enter your Name: ";
	cin.ignore();
	getline(cin, Name);
	cout << "Enter your Account Number: ";
	cin >> accnum; 

	cout << "Enter Account Type: ";
	cin.ignore(); 
	getline(cin, acctype); 

	cout << "Enter Initial Balance: ";
	cin >> bal; 
}
void Bank::putdata()  {
	cout << "Name : " << Name << "\n";
	/*cout<<"Account Number: "<<accnum<<"\n";
	cout << "Account Type: " << acctype << "\n";*/
	cout << "Balance: " << bal;
	cout << "\n";
}
void Bank::withdraw(int a) {
	if (a > bal) {
		cout << "Insufficient Fund\n";

	}
	else {
		cout << a << " Withdrawn\n";
		bal = bal - a;
	}


}
int main() {
	Bank account;
	int x;
	do {
	cout << "1)Enter the account details\n";
	cout << "2)Deposit an Amount\n";
	cout << "3)Withdraw an Amount\n";
	cout << "4)Display details\n";
	cout << "5)Exit.\n";
	
	cin >> x;
	
		switch (x) {
		case 1:
			account.getdata();
			break;
		case 2:
			int amount;
			
			cout << "Enter the amount to be deposited: ";
				cin >> amount;
			account.deposit(amount);
			break;
		case 3:
			
			cout << "Enter the amount to be withdrawn: ";
			cin >> amount;
			account.withdraw(amount);
			break;
		case 4: 
			account.putdata();
			break;
		case 5:
			break;
		default:
			cout<<"Error TryAgain.\n";
		}
	} while (x != 5);
	return  0;
}
