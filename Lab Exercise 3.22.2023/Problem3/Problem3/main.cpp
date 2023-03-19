//Lab Exercise 3/22/2023 Problem 3
//Author: 

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

string pigLatin(string);
string toLowerCase(string);

int main()
{
	//Declare variables
    string str = "";
	string line;
	ifstream infile;
	ofstream outfile;

	//Open the file "hamlet.txt" for reading
	//Add code here


	//Keep looping until you get to end of file
	while (!infile.eof())
	{
		//read line from file
		//Add code here


		//add line to current string
		//Add code here
	

		//put space between lines of text
		//Add code here
				
	}

	//Close the file
	//Add code here


	//convert string to all lower case
	//Add code here
	

	//put string in string stream
	//Add code here
  

	//Open file "piggy.txt" for writing
	//Add code here


	//Loop until string stream is empty
	int count = 0;
	do
	{
		//Declare local variable
		string sub;

		//get word from string steam
		//Add code here
				

		//write pig latin word to file
		//Add code here


		//place space between each word
		//Add code here
	

		//Increment counter
		//Add code here


		//Ten words per line
		//Add code here

	} while (inputString);

	//Close the file
	//Add code here

	cout << endl;
	return 0;
}


//This function will take a string and convert it to lower case
string toLowerCase(string str)
{
	//Add code here

}

//This function will take a word and convert it to pig latin
string pigLatin(string str)
{
	string pl = "";
	if (str == "")
		return "";
	string vowels = "aeiou";

	//if the first character is found in the string vowels, it will 
	//return an integer from 0 to 4
	//Add code here



	return pl;
}
