//Demonstration of multi-level pointers
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//Declare an integer
	int number;

	//Declare an integer pointer
	int *p1;

	//Declare a pointer to an integer pointer
	int **p2;

	//Declare a pointer to a pointer to an integer pointer
	int ***p3;

	//Setup a data structure
	p1 = &number;
	p2 = &p1;
	p3 = &p2;

	//Assign a value to number using p1
	*p1 = 42;

	//Output number using p1
	cout << *p1 << endl;

	//Assign a value to number using p2
	**p2 = 84;

	//Output number using p2
	cout << **p2 << endl;

	//Assign a value to number using p3
	***p3 = 126;

	//Output number using p3
	cout << ***p3 << endl;
	return 0;
}

//Output
//42
//84
//126