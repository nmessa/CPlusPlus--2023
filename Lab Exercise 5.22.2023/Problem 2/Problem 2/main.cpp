//Lab Exercise 5.22.2023 Problem 2
//Author: 

#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
	//Add code here

	return 0;
}

bool isPrime(int n)
{
	for (int i = 2; i <= sqrt((double)n); i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

//Output
//104743
