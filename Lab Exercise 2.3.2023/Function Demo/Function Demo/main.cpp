//Function Demo Program
//Author: Mr. Messa
//Date: 16 February 2011
#include <iostream>
using namespace std;

//Function Prototypes
void swap(int, int);
void swap2(int &, int &);
void swap3(int*, int*);

int main()
{
	int number1 = 42;
	int number2 = 17;

	cout << "Number 1 = " << number1 << endl;
	cout << "Number 2 = " << number2 << endl;
	cout << "Pass by value call" << endl;
	swap(number1, number2);
	cout << "Number 1 = " << number1 << endl;
	cout << "Number 2 = " << number2 << endl;

	cout << "\n\n\n";
	cout << "Number 1 = " << number1 << endl;
	cout << "Number 2 = " << number2 << endl;
	cout << "Pass by reference call" << endl;
	swap2(number1, number2);
	cout << "Number 1 = " << number1 << endl;
	cout << "Number 2 = " << number2 << endl;

	cout << "\n\n\n";
	cout << "Number 1 = " << number1 << endl;
	cout << "Number 2 = " << number2 << endl;
	cout << "Pass by pointer call" << endl;
	swap3(&number1, &number2);
	cout << "Number 1 = " << number1 << endl;
	cout << "Number 2 = " << number2 << endl;
	return 0;
}


//Pass by value swap function
void swap(int n1, int n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

//Pass by reference swap function
void swap2(int &n1, int &n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

//Pass by pointer swap function
void swap3(int* n1, int *n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
/*Sample output
Number 1 = 42
Number 2 = 17
Pass by value call
Number 1 = 42
Number 2 = 17


Number 1 = 42
Number 2 = 17
Pass by reference call
Number 1 = 17
Number 2 = 42


Number 1 = 17
Number 2 = 42
Pass by pointer call
Number 1 = 42
Number 2 = 17
Press any key to continue . . .
*/