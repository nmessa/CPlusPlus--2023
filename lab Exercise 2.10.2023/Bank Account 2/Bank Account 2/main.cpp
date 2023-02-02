//Lab Exercise 2/10/2023 Problem 2
//Author: nmessa

#include <iostream>
#include <string>
using namespace std;

//BankAccount structure definition
struct BankAccount
{
	//Structure members
	string name;
	string number;
	char category;
	double interestRate;

	//BankAccount structure constructor
	BankAccount(string n, string num, char cat)
	{
		//Add code here

	}
};

//Function prototype
void printAccount(BankAccount);

int main()
{
	//Create 3 BankAccount structure variables
	BankAccount one("Mary Jones", "123456", 'S');
	BankAccount two("Frank Smith", "654321", 'C');
	BankAccount three("Jack Florey", "435654", 'M');

	//Print the 3 structure variables
	printAccount(one);
	printAccount(two);
	printAccount(three);
	return 0;
}

//This function will print a BankAccount structure that is passed to it
void printAccount(BankAccount ba)
{
	//Add code here

}

//Output
//Name: Mary Jones
//Account number: 123456
//Account category: S
//APR: 1.5
//
//Name: Frank Smith
//Account number: 654321
//Account category: C
//APR: 0.5
//
//Name: Jack Florey
//Account number: 435654
//Account category: M
//APR: 2.5