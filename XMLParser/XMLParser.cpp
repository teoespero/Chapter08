//  XMLParser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  Teodulfo Espero
//  BS Cloud and Systems Administration
//  BS Software Development
//  Western Governors University

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void removetags(string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == '\n' || str[i] == '\t' || str[i] == '<' || str[i] == '<' || str[i] == '>' || str[i] == '/') {
            str.erase(i, 1);
            i--;
        }
    }
}

int main(){
    ifstream infile;
    string linedata, text;
    int count = 0;

    infile.open("testfile.xml");
    if (infile.fail()) {
        cout << "File I/O error....." << endl;
        exit(1);
    }
    else
    {
        while (getline(infile, linedata)) {
            text = linedata;
            removetags(text);
            if (text == "?xml version=\"1.0\"?" || text == "address_book" || text == "contact")
                cout << "";
            else if (text.substr(0, 4) == "name")
                cout << "Name: " << text.substr(4, text.length() - 8) << endl;
            else if (text.substr(0, 6) == "street")
                cout << "Street: " << text.substr(6, text.length() - 12) << endl;
            else if (text.substr(0, 4) == "city")
                cout << "City: " << text.substr(4, text.length() - 8) << endl;
            else if (text.substr(0, 6) == "state")
                cout << "State: " << text.substr(6, text.length() - 12) << endl;
            else if (text.substr(0, 3) == "zip")
                cout << "Zip: " << text.substr(3, text.length() - 6) << endl << endl;
        }
    }
    infile.close();
    
}

