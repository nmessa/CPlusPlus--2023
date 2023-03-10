//Decimal to binary converter
//Author: 
//Lab Exercise 3.17.2023 Problem 1

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

//Function prototypes
void convertWhole(int, string &);
string reverseString(string);

int main()
{
	//Variable declarations
	string answer = "";
	int number;
	
	cout << "Enter an integer: ";
	cin >> number;

	//Generate binary equivalent of decimal number
	convertWhole(number, answer);

	//Output the result
	cout << number << " = " << answer << endl;
	//This code allows you to run with debugging
	cout << "Hit any key to continue\n";
	getch();
	return 0;
}

/*****************************************************************
** This function will convert a whole number into a binary      **
** number by performing successive division and saving the      **
** remainders in a sting                                        **
** Note: requires reversing the resultant string                **
*****************************************************************/
void convertWhole(int num, string &s)
{
	//Add code here

}

/*****************************************************************
** This function reverses a string that is given to it          **
**                                                              **
*****************************************************************/
string reverseString(string s)
{
	//Add code here

}

//Sample Output
//Enter an integer: 37
//37 = 100101