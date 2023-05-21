//Lab Exercise 5.23.2023 Problem 1
//Author: 

#include <iostream>
#include <sstream>
using namespace std;
#include "bigint.h"

BigInt factorial(int);
int findSum(BigInt);

int main()
{
	BigInt number;
	int result;
	number = factorial(100);
	result = findSum(number);
	cout << result << endl;

	return 0;
}

BigInt factorial(int n)
{
	BigInt fact = 1;
	for (int i = 1; i <= n; i++)
		fact *= i;
	return fact;
}

int findSum(BigInt n)
{
	//Add code here
	return total;
}

//Output
//648
