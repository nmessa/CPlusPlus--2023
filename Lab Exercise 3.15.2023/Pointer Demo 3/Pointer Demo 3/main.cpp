//Pointer Demo 3
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//Declare two data variables
	int a;
	double b;

	//Declare pointer variables
	int *pInt;
	double *pDouble;

	//Assign the address of data variables to pointer variables
	pInt = &a;
	pDouble = &b;
	
	//Assign data to data variable using pointers
	*pInt = 42;
	*pDouble = 3.14;

	//Output data variables and their addresses
	cout << a << "   " << pInt << endl;
	cout << b << "   " << pDouble << endl;

	//Output data variables and their addresses using 
	//pointer variables
	cout << *pInt << "   " << pInt << endl;
	cout << *pDouble << "   " << pDouble << endl;
	
	return 0;
}

//Output
//42   005CF7E0
//3.14   005CF7D0
//42   005CF7E0
//3.14   005CF7D0