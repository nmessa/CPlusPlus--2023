//Lab Exercise 5.12.2023 Problem 3
//Author: nmessa

#include <iostream>
#include <string>
using namespace std;

int * functionThree(int [], int);

int main()
{
	//Declare variables
	int size1, size2, size3;
	int * p1;
	int * p2;
	int * p3;

	//Create test arrays
	int ary1[3] = {1, 5, 7};
	int ary2[4] = {1, 5, 3, 7};
	int ary3[7] = {1, 3, 5, 7, 8, 5, 7};

	//Calculate size of test arrays
	//Add code here


	//Call functionThree with test arrays and store return in pointer
	p1 = functionThree(ary1,size1);
	p2 = functionThree(ary2,size2);
	p3 = functionThree(ary3,size3);
	
	//Print the contents of ary1 using pointer p1
	//Add code here


	//Print the contents of ary2 using pointer p2
	//Add code here


	//Print the contents of ary3 using pointer p3
	//Add code here


	return 0;
}

int * functionThree(int arr[], int s)
{
	//Add code here

}
