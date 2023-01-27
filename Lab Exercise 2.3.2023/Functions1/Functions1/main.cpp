// Functions1.cpp
// Demonstrates the use of pass by value
//Author: Mr. Messa
//Date: 2/5/2008
#include <iostream>
using namespace std;

//Function Prototype
int add(int, int);

int main()
{
	//Declare variables
	int number1, number2, sum;

	//Input two integers
	cout << "Enter a number: ";
	cin >> number1;
	cout << "Enter a number: ";
	cin >> number2;

	//Send numbers to function and get back the sum
	sum = add(number1, number2);

	//Output the result
	cout << number1 << " + " << number2 << " = " << sum << endl;
	return 0;
}

//Function add returns the sum of the two parameters that
//are sent to it
int add(int x, int y)
{
	int answer;
	answer = x + y;
	return answer;
}

/* Sample output
Enter a number: 5
Enter a number: 8
5 + 8 = 13
Press any key to continue
*/
