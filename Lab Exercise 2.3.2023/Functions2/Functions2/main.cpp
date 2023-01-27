// Functions2.cpp 
// Demonstrates the use of pass by value
// Using a void return function
//Author: Mr. Messa
//Date: 2/5/2008
#include <iostream>
using namespace std;

//Function Prototype
void add(int, int);

int main()
{
	//Declare variables
	int number1, number2, sum;

	//Input two integers
	cout << "Enter a number: ";
	cin >> number1;
	cout << "Enter a number: ";
	cin >> number2;

	//Send numbers to function and which calculates
	//and prints sum
	add(number1, number2);

	return 0;
}

//Function add returns the sum of the two parameters that
//are sent to it
void add(int x, int y)
{
	int answer;
	answer = x + y;
	//Output the result
	cout << x << " + " << y << " = " << answer << endl;
}

/*Sample output
Enter a number: 123
Enter a number: 456
123 + 456 = 579
Press any key to continue
*/

