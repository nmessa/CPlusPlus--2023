//Lab Exercise 2.22.2023 Problem 5
//Author: 

#include <iostream>
#include <string>
using namespace std;

void getData(int [], string []);
void printReport(int [], string []);
int findHighest(int [], string [], string &);
int findLowest(int [], string [], string &);
int findTotal(int []);

int main()
{
	int numJars[5];
	string salsa[] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	getData(numJars, salsa);
	printReport(numJars, salsa);
	return 0;
}

void getData(int jars[], string salsa[])
{
	//Add code here

}

void printReport(int j[], string s[])
{
	//Add code here

}

int findHighest(int j[], string s[], string &name)
{
	//Add code here

}

int findLowest(int j[], string s[], string &name)
{
	//Add code here

}

int findTotal(int j[])
{
	//Add code here

}

//Sample Output
//Enter the number of jars of Mild: 4
//Enter the number of jars of Medium: 5
//Enter the number of jars of Sweet: 3
//Enter the number of jars of Hot: 6
//Enter the number of jars of Zesty: 12
//Total sales: 30 jars
//Zesty sold the most jars: 12 jars
//Sweet sold the fewest jars: 3 jars