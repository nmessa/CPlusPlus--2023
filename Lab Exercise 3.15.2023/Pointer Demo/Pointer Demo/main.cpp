//Demonstration of pointers
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	//Declare an integer
	int number;

	//Declare an integer pointer
	int *ptr;  //ptr is an address in memory that is capable of holding the address of an integer

	//Make ptr point at number
	ptr = &number;	//This can be read as ptr is assigned the address of number

	//Assign a value to number using a pointer
	*ptr = 42;

	//Output the value using a pointer
	cout << *ptr << endl;

	return 0;
}
//Output
//42