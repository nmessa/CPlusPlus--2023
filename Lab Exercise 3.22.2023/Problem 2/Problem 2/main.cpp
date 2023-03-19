//Lab Exercise 3/22/2023 Problem 2
//Author: 
//Test file named "test.txt" and contains:
//Jack be nimble
//Jack be quick
//Jack jumped over the candlestick
//This is a test
//Jack and Jill
//Ran up the hill
//Jack fell down
//and broke his crown

//Search string = "Jack"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//Declare variables
	ifstream infile;
	string filename, line, word;
	int count = 0;

	//Get filename from user
	//Add code here


	//Get word to search for from user
	//Add code here


	//Open the file
	//Add code here


	//Keep looping until end of file
	while (!infile.eof())
	{
		//Read a line
		//Add code here


		//If word found in line, increment count and print line
		//Add code here

	}

	//Close the file
	infile.close();

	//Output search results
	//Add code here
 
	return 0;
}

//Output
//Enter filename: test.txt
//Enter word to search for: Jack
//Jack be nimble
//Jack be quick
//Jack jumped over the candlestick
//Jack and Jill
//Jack fell down
//Jack was found on 5 lines