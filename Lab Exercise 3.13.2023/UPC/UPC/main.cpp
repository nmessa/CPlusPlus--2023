//Lab Exercise 3/13/2023 Problem 2
//Author: 

#include <iostream>
#include <string>

using namespace std;

//Function prototype
bool isValidProductCode(string);

int main()
{
	string code;
	cout << "Enter the UPC: ";
	cin >> code;
	
	if (isValidProductCode(code))
		cout << "Code is valid" << endl;
	else
		cout << "Code is not valid" << endl;
	return 0;
}

//This function will return the validity of a UPC
bool isValidProductCode(string c)
{
	//Declare variables
	int sum = 0;

	//add up the evens
	//Add code here

	//add up the odds
	//Add code here


	//Test if valid
	//Add code here

}

//Output for a bottle of Diet Pepsi
//Enter the UPC: 012000504068
//Code is valid