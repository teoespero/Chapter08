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

	cout << text << endl << reversedtext << endl;

	if (reversedtext == text)
		return true;
	else
		return false;

}



void showresult(bool funresult) {
	if (funresult)
		cout << "Palindrome....." << endl;
	else
		cout << "Not Palindrome....." << endl;
}

void gettextinput(string &text) {

	cout << "enter some text....";
	getline(cin, text);

}

int main(){
	string text;

	gettextinput(text);
	showresult(checkifpalindrome(text));
	
}