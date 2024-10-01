#include<iostream>
#include<string>
using namespace std;


void checkanagram(string s1, string s2) {
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] >= 65 && s1[i] <= 90)
		{
			s1[i] = s1[i] + 32;
		}
	}
	for (int i = 0; i < s2.length(); i++)
	{
		if (s2[i] >= 65 && s2[i] <= 90)
		{
			s2[i] = s2[i] + 32;
		}
	}

	for (int i = 0; i < s1.length(); i++) {
		for (int j = 0; j < s1.length() - 1 - i; j++) {
			if (s1[j] > s1[j + 1]) {
				char temp = s1[j];
				s1[j] = s1[j + 1];
				s1[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < s2.length(); i++) {
		for (int j = 0; j < s2.length() - 1 - i; j++) {
			if (s2[j] > s2[j + 1]) {
				char temp = s2[j];
				s2[j] = s2[j + 1];
				s2[j + 1] = temp;
			}
		}
	}
	if (s1 == s2) {
		cout << "Anagram";
		}
	else {
		cout << "Not an Anagram";
	}


} 
	/*{
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] >= 65 && s1[i] <= 90)
		{
			s1[i] = s1[i] + 32;
		}
	}
	for (int i = 0; i < s2.length(); i++)
	{
		if (s2[i] >= 65 && s2[i] <= 90)
		{
			s2[i] = s2[i] + 32;
		}
	}
	int flag = 0;
	if (s1.length() != s2.length()) {
		cout << "Not an Anagram";
	}
	else {
		for (int i = 0; i < s1.length(); i++) {
			flag = 0;
			for (int j= 0; j < s1.length(); j++) {
				if (s2[j] == s1[i]&& s2[i]==s1[j]) {
					flag = 1;
					continue;
				}
			}
			if (flag == 0) {
				cout << "Not an Anagram";
				break;
			}
		}
		if (flag == 1) {
			cout << "It is an Anagram";
		}
	}
}*/


int main() {
	string  s1, s2;
	cin >> s1 >> s2;

	//cout << s1<<  " " << s2;
	checkanagram(s1, s2);
}