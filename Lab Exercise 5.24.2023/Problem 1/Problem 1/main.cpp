//Lab Exercise 5.24.2023 Problem 1
//Author: 

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
bool isPrime(int);


int main()
{
	int number;
	vector<int> primes;
	vector<int>::iterator it;
	cout << "Enter a number: ";
	cin >> number;

	//Build list of primes
	//Add code here


	//Find primes that add up to number
	//Add code here



	return 0;
}

bool isPrime(int n)
{
	for (int i = 2; i <  (int)sqrt((double)n) + 1; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

//Sample Output
//Enter a number: 16
//16 = 3 + 13
//16 = 5 + 11
//16 = 11 + 5
//16 = 13 + 3