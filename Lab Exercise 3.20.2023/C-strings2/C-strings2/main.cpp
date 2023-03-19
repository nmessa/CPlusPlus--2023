// This program illustrates that you cannot compare
// C-strings with relational operators. Although it
// appears to test the strings for equality, that is
// not what happens.
#include <iostream>
using namespace std;

int main()
{
	// Two arrays for holding two strings.
	const int LENGTH = 40;
	char firstString[LENGTH], secondString[LENGTH];

	// Read two strings.
	cout << "Enter a string: ";
	cin.getline(firstString, LENGTH);
	cout << "Enter another string: ";
	cin.getline(secondString, LENGTH);

	// Attempt to compare the two c-strings using ==.
	// Why does this not work????
	if (firstString == secondString)
		cout << "You entered the same string twice.\n";
	else
		cout << "The strings are not the same.\n";

	return 0;
}

//Sample Output
//Enter a string: Test
//Enter another string: Test
//The strings are not the same.