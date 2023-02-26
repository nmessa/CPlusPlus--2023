//Lab Exercise 3/10/2023 Problem 2
//Author: 

#include <iostream>
using namespace std;

//Function prototype
int countBits(int);

int main()
{
	//Declare variables
	int number, bits;

	//Get integer from user
	cout << "Enter an integer: ";
	cin >> number;

	//Call countBits function
	bits = countBits(number);

	//Output result
	cout << number << " contains " << bits << " one bits" << endl;
	return 0;
}

//Returns the number of bits in the binary equivalent of the 
//decimal number
int countBits(int num)
{
	int count = 0;
	//Add code here



	return count;
}

// Output
// Enter an integer: 127
// 127 contains 7 one bits