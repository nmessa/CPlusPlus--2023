//Lab Exercise 3.23.2023 Problem 3
//Author: 

#include <iostream>
#include <string>
using namespace std;

double angle(int, int);

int main()
{
	string myTime; 
	int colon, hour, minute;

	cout << "Enter the time (hh:mm): ";
	cin >> myTime;
	colon = myTime.find(":");

	hour = stoi(myTime.substr(0, colon));
	minute = stoi(myTime.substr(colon+1));


	cout << angle(hour, minute) << " degrees" << endl;
	return 0;
}

double angle(int hour, int minute)
{
	//Add code here

}

//Sample Output
//Enter the time (hh:mm): 3:05
//60 degrees