// Getline Demo
// This program demonstrates using getline for String class objects
// as well as C-Style strings

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
	cin.getline(name, sizeof(name));  //second parameter number of bytes C-String can hold

	//Check output
	cout << str << endl;
	cout << name << endl;

	return 0;
}

// Output
// Enter a line of text: Now is the time
// Enter a name: James Earl Jones
// Now is the time
// James Earl Jones