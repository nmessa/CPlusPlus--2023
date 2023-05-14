//Lab Exercise 5.19.2023 Problem 3
//Author: 

#include <iostream>
using namespace std;

//Add prototypes here

int main()
{
	int frequency[10] = {0};
	int number;
	cout << "Enter an integer: ";
	cin >> number;
	findFreqs(frequency, number);
	printFreqs(frequency);
	return 0;
}

//Add functions here


