//Conditional Operator Demo
//Author: nmessa
//Date: 1/30/2021

#include <iostream>
#include <string>  //Needed for String class that overloads the << operator
using namespace std;

int main()
{
	int number;
    string answer;
    cout << "Enter a number: ";
    cin >> number;
            
    answer = (number % 2 == 1) ? "Odd" : "Even";
    cout << answer << endl;
	return 0;
}