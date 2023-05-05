//Lab Exercise 5.10.2023 Problem 2
//Author: 

#include <iostream>
#include <sstream>
using namespace std;

//Add prototype for checkTitle here

int main()
{
	cout << boolalpha;
	cout << checkTitle("A Mind Boggling Achievement") << endl;
	cout << checkTitle("A Simple C++ Program!") << endl;
	cout << checkTitle("Water is transparent") << endl;

	return 0;
}

//Add code for checkTitle here

//Output
//true
//true
//false