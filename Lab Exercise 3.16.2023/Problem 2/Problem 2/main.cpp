//Lab Exercise 3/16/2023 Problem 2
//Author: 

#include <iostream>
using namespace std;

//Function prototypes
void swap1(int, int);		//pass by value
void swap2(int *, int *);	//pass a pointer
void swap3(int &, int &);	//pass a reference

int main()
{
	//Initialize variables
	int number1 = 42;
	int number2 = 17;
	int *pNum1, *pNum2;
	pNum1 = &number1;
	pNum2 = &number2;

	//Exercise the swap functions
	cout << "Number 1 = " << number1 << "\nNumber 2 = " 
		<< number2 << endl << endl;

	//Pass integers by value
	swap1(number1, number2);
	cout <<"After swap1" << endl;
	cout << "Number 1 = " << number1 << "\nNumber 2 = " 
		<< number2 << endl << endl;

	//Pass pointers to integers
	swap2(pNum1, pNum2);
	cout <<"After swap2" << endl;
	cout << "Number 1 = " << number1 << "\nNumber 2 = " 
		<< number2 << endl << endl;

	//Pass integers by reference
	swap3(number1, number2);
	cout <<"After swap3" << endl;
	cout << "Number 1 = " << number1 << "\nNumber 2 = " 
		<< number2 << endl << endl;

	return 0;
}

//Pass by value swap function
void swap1(int n1, int n2)
{
	//Add code here

}

//Pointer swap function
void swap2(int *n1, int *n2)
{
	//Add code here

}

//Pass by reference swap function
void swap3(int &n1, int &n2)
{
	//Add code here

}

//Sample Output
//Number 1 = 42
//Number 2 = 17
//
//After swap1
//Number 1 = 42
//Number 2 = 17
//
//After swap2
//Number 1 = 17
//Number 2 = 42
//
//After swap3
//Number 1 = 42
//Number 2 = 17