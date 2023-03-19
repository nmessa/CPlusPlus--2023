//Lab Exercise 3/20/2023 Problem 1
//Author: 

#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char *);

int main()
{
	char myString[] = "hello I am here";
	cout << "Original C-string: " << myString << endl;
	reverseString(myString);
	cout << "Reversed C-string: " << myString << endl;
	return 0;
}

//This function will reverse the string in place
void reverseString(char *str)
{
	//Declare two char pointers
	char *pFirst, *pLast;

	//set pointer to start of string
	//Add code here


	//set pointer to end of string
	//Add code here
	

	//Loop until pointers 'meet'
	while (pLast > pFirst)			
	{
		//Swap the contents of what pointers are pointing at
		//Add code here


		//increment pFirst
		//Add code here


		//decrement pLast
		//Add code here
				
	}
}

//Output
//Original C-string: hello I am here
//Reversed C-string: ereh ma I olleh