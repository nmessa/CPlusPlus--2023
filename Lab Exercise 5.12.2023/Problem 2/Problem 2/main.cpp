//Lab Exercise 5.12.2023 problem 2
//Author: 

#include <iostream>
#include <string>
using namespace std;

//Add prototype here


int main()
{
	int size1, size2, size3, size4, size5;

	//Create Test arrays
	int ary1[4] = {10, 20, 40, 50};
	int ary2[4] = {5, 20, 40, 10};
	int ary3[4] = {10, 20, 40, 10};
	int ary4[4] = {12, 24, 35, 55};
	int ary5[5] = {12, 24, 36, 74, 10};

	//Calculate the size of each array (do not just count the elements)
	//Add code here


	cout << boolalpha;

	//Call functionTwo with test arrays
	cout << functionTwo(ary1, size1) << endl;
	cout << functionTwo(ary2, size2) << endl;
	cout << functionTwo(ary3, size3) << endl;
	cout << functionTwo(ary4, size4) << endl;
	cout << functionTwo(ary5, size5) << endl;

	return 0;
}

//Add function here