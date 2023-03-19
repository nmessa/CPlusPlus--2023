//Lab Exercise 3/23/2023 Problem 5
//Author: 

#include <iostream>
#include <vector>;
using namespace std;

bool isPrime (int);

int main()
{
	//Add code here



	return 0;
}

bool isPrime (int n)
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}
//Output
//2 * 3 * 11 = 66
//2 * 11 * 3 = 66
//3 * 2 * 11 = 66
//3 * 11 * 2 = 66
//7 * 13 = 91
//11 * 2 * 3 = 66
//11 * 3 * 2 = 66
//13 * 7 = 91