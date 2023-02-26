//Lab Exercise 3/10/2023 Problem 3
//Author: 

#include <iostream>
#include <string>
using namespace std;

string convert(int, int, char []);
void reverseString(string &);

int main()
{
	int number, base;
	char values[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C',
		'D', 'E', 'F'};
	string converted;
	cout << "Enter an integer: ";
	cin >> number;
	cout << "Enter a base (2 - 16): ";
	cin >> base;
	converted = convert(number, base, values);
	cout << number << " = " << converted << " base " << base << endl;
	return 0;
}

string convert(int n, int b, char v[])
{
	//Add code here

}

void reverseString(string &str)
{
    //Add code here

}
