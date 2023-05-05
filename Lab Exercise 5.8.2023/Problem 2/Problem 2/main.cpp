//Lab Exercise 5.8.2023 Problem 2
//Author: 

#include <iostream>
#include <string>
using namespace std;

//Add prototype for function doubleSwap here

int main()
{
	cout << doubleSwap("aabbccc", 'a', 'b') << endl;
	cout << doubleSwap("random w#rds writt&n h&r&", '#', '&') << endl;
	cout << doubleSwap("128 895 556 788 999", '8', '9') << endl;
	return 0;
}

//Add code for function doubleSwap here


//Output
//bbaaccc
//random w&rds writt#n h#r#
//129 985 556 799 888
