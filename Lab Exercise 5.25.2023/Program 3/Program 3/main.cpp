//Lab Exercise 5.25.2023 Problem 3
//Author: 

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int);

int main()
{
	int numTerms;
    double term, x;
    double total = 1.0;
    //Add code here


	return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

//Sample Output
//Enter the value for X: 2
//Enter the number of terms: 5
//The sum of this series -0.415873
