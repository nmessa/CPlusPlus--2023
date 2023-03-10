//Lab Exercise 3.13.2023 Problem 1
//Author: 

#include <iostream>
#include <string>
using namespace std;

//Function prototypes
string parity(char);
string convertToBinary(char);
int countBits(int);

int main()
{
	string toConvert;
	string converted = "";
	cout << "Enter a string to convert (without spaces): ";
	//use getline() to have spaces allowed
	cin >> toConvert;

	//Send character by character for conversion to parity string
	for (int i = 0; i < toConvert.length(); i++)
		converted += parity(toConvert[i]);

	//Output the new parity string
	cout << "The parity string is now: " << converted << endl;
	return 0;
}


//This function returns the parity string for a character
string parity(char ch)
{
	//Declare variables
	string base2;
	int numOnes;

	//Get numOnes
	//Used to determine the value parity bit
	//Add code here


	//Get binary equivalent of a character
	//Add code here


	//Add the parity bit to the end of the parity string
	//Add code here

}

string convertToBinary(char ch)
{
	//Declare variables
	int num = int(ch);
	string forward = "";
	string reversed = "";


	//Convert num to binary string
	//Add code here

	
	//Reverse the string
	//Add code here


	//Pad string to 8 bits
	//Add code here

}

//This function will return the number of 1's in the ASCII value
int countBits(int num)
{
	//Add code here

}

//Sample Output
//Enter a string to convert (without spaces): hello
//The parity string is now: 011010001011001010011011000011011000011011110