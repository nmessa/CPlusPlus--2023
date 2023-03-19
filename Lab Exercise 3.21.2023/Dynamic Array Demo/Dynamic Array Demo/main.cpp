//Dynamic array demo
//Date: 3.18.2020
//Author: nmessa

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define SIZE 10

int main()
{
	//Initialize the random number generator
	srand(time(0));

	//Create a dynamic 10 element array
	int *arr = new int[SIZE];

	//Fill array with test scores from 50 to 100
	for (int i=0; i<SIZE; i++) 
	{
         arr[i] = rand()%51 + 50;
    }

	//Print the array contents
	for (int i=0; i<SIZE; i++) 
	{
         cout << "Score for student " << i + 1 << ": " << *(arr + i) << endl; //demonstrates pointer arithmetic
    }

	//Free memory allocated by array
	delete(arr);

	return 0;
}

//Sample Output
//Score for student 1: 87
//Score for student 2: 63
//Score for student 3: 99
//Score for student 4: 82
//Score for student 5: 84
//Score for student 6: 99
//Score for student 7: 88
//Score for student 8: 75
//Score for student 9: 56
//Score for student 10: 51