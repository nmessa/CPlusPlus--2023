//Lab Exercise 5.15.2023 Problem 5
//Author: 

#include <iostream>
#include <string>
using namespace std;

//Add prototype here

int main()
{
	int size1, size2, size3;

	//Declare test arrays
	int ary1[5] = {1, 1, 2, 3, 1};
	int ary2[5] = {1, 1, 2, 4, 1};
	int ary3[6] = {1, 1, 2, 1, 2, 3};
	

	//Find size of arrays
	//Add code here

	cout << boolalpha;
	//Call functionFive
	cout << functionFive(ary1, size1) << endl;
	cout << functionFive(ary2, size2) << endl;
	cout << functionFive(ary3, size3) << endl;

	return 0;
}

//Add function here
