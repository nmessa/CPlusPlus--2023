//Lab Exercise 5.23.2023 Problem 2
//Author: nmessa

#include <iostream>
using namespace std;
#include "bigint.h"

BigInt fibonacci(int);

int main()
{
	BigInt number;
	int n = 1;
	//Add code here


	cout << n << endl;
	return 0;
}


//Iterative Fibonacci function
BigInt fibonacci(int num)
{
	BigInt value = 1;
	BigInt pprev = 0, prev = 1;
	if (num == 0 || num == 1)
		return num;
	for (int i = 2; i <= num; i++)
	{
		value = pprev + prev;
		pprev = prev;
		prev = value;
	}
	return value;
}

//Output
//482