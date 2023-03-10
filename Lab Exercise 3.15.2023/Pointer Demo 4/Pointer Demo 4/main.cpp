//Pointer demonstration
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//Declare an integer
	int number;

	//Declare a pointer to an integer
	int* pNumber;

	//Make pNumber point to integer number
	pNumber = &number;

	//Put 42 in number using pointer
	*pNumber = 42;

	//Print number using a pointer
	cout << "The value of number = " << *pNumber << endl;

	//Print the address of number
	cout << "The address of number is " << pNumber << endl;

	//Create a pointer to pNumber
	int** ppNumber;

	//Make ppNumber point to pNumber
	ppNumber = &pNumber;

	//Print number using ppNumber
	cout << "Printing number using ppNumber " << **ppNumber << endl;

	//Print out the addess of number, pNumber, and ppNumber
	cout << "The address of number is " << pNumber << endl;
	cout << "The address of pNumber is " << ppNumber << endl;
	cout << "The address of ppNumber is " << &ppNumber << endl;
	return 0;
}

//Output
//The value of number = 42
//The address of number is 00AFFB20
//Printing number using ppNumber 42
//The address of number is 00AFFB20
//The address of pNumber is 00AFFB14
//The address of ppNumber is 00AFFB08