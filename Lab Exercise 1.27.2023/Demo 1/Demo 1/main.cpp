//If Else Demo
//Author: nmessa
//Date: 1/30/2021

#include <iostream>
using namespace std;

int main()
{
	int number;
        
    cout <<"Enter a number: ";
    cin >> number;

    if (number % 2 == 1)
		cout << "Odd" << endl;
    else
		cout << "Even" << endl;
}