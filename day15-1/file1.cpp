#include<iostream>
#include<string>
using namespace std;
//create and write something
#include <fstream>
#include <sstream> // For std::istringstream

using namespace std;
//#define filecreate
//#define Alphachange
//#define opendisplay
//#define Linecount
//#define Average
//#define Capital
//#define Largestword
//#define wordcount
//#define merge


#ifdef filecreate
int main()
{
	ofstream outFile("newfile2.txt"); //creates or open a file
	string s;
	getline(cin, s);
	outFile << s;
	outFile.close();
	return 0;
}
#endif

#ifdef opendisplay
int main()
{
	ifstream openFile("newfile2.txt");
	string line;
	int  count = 0;
	if (!openFile) {
		cout << "No file present";
	}
	while (getline(openFile, line))
		{
		cout << line<<endl;
		}
		openFile.close();
}


#endif 
/*************************************************************************************************/
#ifdef Linecount
int main()
{
	ifstream openFile("newfile2.txt");
	string line;
	int  count = 0;
	if (!openFile) {
		cout << "No file present";
	}
	while (getline(openFile, line))
	{
		++count;
	}
	openFile.close();

	cout << count;
}
#endif // Linecount


#ifdef wordcount

int main() {
	ifstream openFile("newfile2.txt");
	string l;
	int count = 0;
	int j = 0;
	if (!openFile) {
		cout << "No file present";
	}
	while (getline(openFile, l))
	{
		for (int i = 0; i < l.length(); i++) {
			if (l[i+1] == ' '&&l[i]!=' ') {
				count++;
			}
			else if (l[i+1] == '\0' && l[i] != ' ') {
				count++;
			}
		}
	}
	cout << count;
		
}
#endif 







/************************************************************************************/
#ifdef Average
int main()
{
	ifstream openFile("newfile1.txt");
	string line,temp;
	int  count = 0;
	int a = 0;
	int sum = 0 ;
	double avg = 0;
	if (!openFile) {
		cout << "No file present";
	}
	while (getline(openFile, line)) {
		for (int i = 0; i < line.length(); i++) {
			if (line[i] == ' ' || line[i] == '\n' || line[i] == '\0') {
				if (temp.length() > 0) {
					sum = sum + stoi(temp);
					temp = "";
					count++;
				}
			}
			else { temp = temp + line[i]; }
		}
		if (!temp.empty()) {
			sum += stoi(temp);
			count++;
			temp = "";
		}
	}
	avg = (double)sum/count ;
	cout << "Average : " <<avg;
}

#endif // Average


/****************************************************************************************************/


#ifdef Alphachange
void change(string s) {
	int l = 0;
	while (s[l] != '\0') {
		l++;
	}
	for (int i = 0; i < l; i++) {
		if (s[i] >= 'a' && s[i] < 'z') {
			s[i] = s[i] + 1;
		}
		else if (s[i] == 'z') {
			s[i] = 'a';
		}
	}
	cout << s;
}
int main() {
	string s;
	getline(cin,s);
	change(s);
}
#endif 

/**********************************************************************************************************/
#ifdef capital
void capital(string s) {
	int l = 0;
	while (s[l] != '\0') {
		l++;
	}
	s[0] = s[0] - 32;
	int i = 0;
	for (int i = 1; i < l; i++) {
		if (s[i - 1]==' ') {
			s[i] = s[i] - 32;
		}
	}
	cout << s;
}
int main() {
	string s;
	getline(cin, s);
	capital(s);
}
#endif
/**********************************************************************************************************/

#ifdef Largestword
void findlargest(string s) {
	string largest;
	string current;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') {
			current = current + s[i];
		}
		else{
			if (current.length() > largest.length()) {
				largest = current;
				
			}
			current = "";
			}
	}
	if (current.length() > largest.length()) {
		largest = current;

	}
	cout << largest;

}
int main() {
	string s;
	getline(cin,s);
	findlargest(s);

}

#endif // 

/***************************************************************************/

#ifdef merge
int main() {
	ifstream openFile("newfile2.txt");
	string s1, s2;
	if (!openFile) {
		cout << "Error file not open";
	}
	else {
		while (getline(openFile, s1)) {
			s2 = s2 + s1 + '\n';
		}
	}
		openFile.close();
		ifstream openFile2("newfile3.txt");
		string s3, s4;
		if (!openFile2) {
			cout << "Error file not open";
		}
		else {
			while (getline(openFile2, s3)) {
				s4 = s4 + s3 + '\n';
			}
		}
			openFile.close();
		ofstream outFile("newfile4.txt",ios::app); //creates or open a file
		outFile << s2 ;
		outFile << s4 ;
		outFile << '\n';
		outFile.close();

}
#endif // 