// Getline Demo
// This program demonstrates using getline for String class objects
// as well as C-Style strings
//Author: nmessa
//Date: 1.19.2023

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char name[30];
	string str;

	//Get a line into a String class object
	cout << "Enter a line of text: ";
	getline(cin, str);

	//Get a line into a C-String
	cout << "Enter a name: ";
	cin.getline(name, sizeof(name));

	//Check output
	cout << str << endl;
	cout << name << endl;

	return 0;
}
