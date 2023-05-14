//Lab Exercise 5.19.2023 Problem 4
//Author: 

#include <iostream>
#include <string>
using namespace std;

//Add prototype here


int main()
{
	string number, hex;
	cout << "Enter a hexadecimal number: ";
	cin >> number;
	hex = convertToHex(number);
	cout << "The equivalent binary number is " << hex << endl;
	return 0;
}

//Add function here