//  PalindromeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;



bool checkifpalindrome(string text) {
	string reversedtext = "";

	for (int pointer = text.length()-1; pointer >= 0; pointer--)
		reversedtext += text[pointer];

	cout << text.length() << endl << reversedtext.length() << endl;

	if (reversedtext == text)
		return true;
	else
		return false;

}


void keeprunning(char& response) {
	cout << "Run it again.....";
	cin >> response;
}

bool stopit(char answer) {
	if (tolower(answer) == 'y')
		return true;
	else if (tolower(answer) == 'n')
		return false;
	else {
		cout << "\t***Invalid response..." << endl;
		return false;
	}
}



void showresult(bool funresult) {
	if (funresult)
		cout << "Palindrome....." << endl;
	else
		cout << "Not Palindrome....." << endl;
}

void gettextinput() {
	string text;
	cout << "enter some text....";
	getline(cin, text);
	showresult(checkifpalindrome(text));
}

int main(){

	gettextinput();
	
}