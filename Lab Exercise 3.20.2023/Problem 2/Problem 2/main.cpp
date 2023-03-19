//Lab Exercise 3/20/2023 Problem 2
//Author: 

#include <iostream>
#include <cstring>
using namespace std;

int numWords(char *);

int main()
{
	char myString[] = "take me to your leader";
	int words;
	words = numWords(myString);
	cout << myString << " contains " << words << " words\n";
	return 0;
}

//This function will count the number of words in a C string
int numWords(char *str)
{
	//Create 2 char pointers and integer counter
	char *pFirst, *pLast;
	int count;

	//set count to 1 to handle fencepost
	//Add code here
	

	//set pointer to start of string
	//Add code here
	

	//set pointer to end of string
	//Add code here
	

	//Loop until pointers 'meet'
	while (pFirst < pLast)			
	{
		//if space detected increment count
		//Add code here


		//increment pFirst
		//Add code here
					
	}
	return count;
}

//Output
//take me to your leader contains 5 words