//Functions3.cpp 
// Demonstrates the use of pass by reference
//Author: Mr. Messa
//Date: 2/5/2008
#include <iostream>
using namespace std;

//Function Prototype
void add(int, int, int &);

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
	//and "returns" the answer by reference
	add(number1, number2, sum);

	//Output the answer
	cout << number1 << " + " << number2 << " = " << sum << endl;

	return 0;
}

//Function add returns the sum of the two parameters that
//are sent to it with the answer "returned" as a 
//reference parameter
void add(int x, int y, int &answer)
{
	answer = x + y;
}

/*Sample output
Enter a number: 324
Enter a number: 576
324 + 576 = 900
Press any key to continue
*/

