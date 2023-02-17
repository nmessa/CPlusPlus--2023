//Lab Exercise 2.24.2023 Problem 1
//Author: nmessa

#include <iostream>
using namespace std;

#define SIZE 18

//Function prototype
bool findAccount(int [], int);

int main()
{
	//Declare variables
	int accountNumber;

	//Create an array initialized to valid account numbers
	//Add code here


	//Check account numbers
	cout << "Enter account number (9999999 to end): ";
	cin >> accountNumber;

	while (accountNumber != 9999999)  //Loop until End-of-data flag
	{
		//Add code here

	}
	
	cout << "Bye-bye\n\n\n";
	return 0;
}

//Checks the array nums for an account number n
bool findAccount(int nums[], int n)
{
	//Add code here


}

//Sample Output
//Enter account number (9999999 to end): 8080152
//That is a valid account
//
//
//Enter account number (9999999 to end): 7568975
//That account is invalid
//
//
//Enter account number (9999999 to end): 9999999
//Bye-bye