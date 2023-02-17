//vectorDemo.cpp
//A program to demonstrate the Vector class
//Author: nmessa

#include <iostream>
#include <cstdlib>			//for random number generation based on
#include <ctime>			//system clock seed value
#include <vector>			
using namespace std;

void printVector(vector<int>);

int main()
{
	vector<int> vect(10);
	int number, i;
	int temp;
	srand(time(0));		//initialize pseudorandom number generator

	//Fill vector with random numbers
	for (i = 0;i < vect.size(); i++)
		vect[i] = rand();

	printVector(vect);

	//Add a number to the vector
	cout << "\nI just added this number (12345): ";
	vect.push_back(12345);

	printVector(vect);

	//Pop an element from the vector
	temp = vect[vect.size()-1];
	vect.pop_back();
	cout << "\nPopped value = " << temp << endl;

	printVector(vect);

	cout << "\nI am re-sizing the array" << endl;
	vect.resize(20);
	cout << "The vector now has " << vect.size() << " elements" << endl;
	printVector(vect);
	return 0;
}

//This function takes a Vector class object and displays it
//in a visual format
void printVector(vector<int> v)
{
	int i;
	cout << "The vector contains the following data: " << endl;
	for (i = 0;i < v.size()- 1; i++)
	{
		if (i % 5 == 0)
			cout << endl;
		cout << v[i] << " ---> ";
	}
	cout << v[i] << endl;
}
