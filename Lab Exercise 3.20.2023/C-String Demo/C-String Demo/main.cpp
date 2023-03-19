/*This program will demonstrate some of the C-style string
**functions.  Specifically strcpy, strcmp, strcat, and strlen
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char string1[20] = "Hello";
	char string2[20] = " World";
	char string3[20];
	char string4[20];
	strcpy(string3, string1);   //Copy "Hello into string3
	strcpy(string4, string1);   //Copy "Hello into string4
	strcat(string3, string2);	//Concatenate " World" to "Hello"
	cout << string3 << endl;	//Output "Hello World"

	cout << "Length of Hello World " << strlen(string3) << endl;
	cout << "Identical string compare " << 
		strcmp(string1, string4) << endl;
	cout << "Non-Identical string compare " << 
		strcmp(string1, string2) << endl;
	return 0;
}
/*Sample output
Hello World
Length of Hello World 11
Identical string compare 0
Non-Identical string compare 1
Press any key to continue . . .
*/