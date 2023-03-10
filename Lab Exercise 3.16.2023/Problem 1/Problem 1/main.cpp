//Lab Exercise 3/16/2023 Problem 1
//Author: 

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define SIZE 100

//Function prototypes
void fillArray(int *);
void printArray(int *);

int main()
{
	int myArray[SIZE];
	srand(time(0));
	fillArray(myArray);
	printArray(myArray);
	return 0;
}

//Fills array with random integers in the range of 1 to 1000
void fillArray(int *a)
{
	//You should create an integer pointer (ptr) so as to preserve the value of a
	//Add code here


	//Assign a to ptr
	//Add code here


	//a and ptr have the address of the first element of the array

	//Loop through the array storing a random number in *ptr
	//and incrementing ptr each time you loop
	//Add code here


}

//Prints the contents of an array using a pointer
void printArray(int *a)
{
	int *pFirst, *pLast; //Create array bounds pointers
	//Set start of array
	//Add code here

	//Set end of array
	//Add code here

	while (pFirst <= pLast)	//Check to see if pFirst at end of array
	{
		//Output array element
		//Add code here

		//Move pointer to next element
		//Add code here

	}	
}

//Sample Output
//314     230     261     437     754     890     7       415     504     972
//13      695     761     653     120     663     248     769     856     603
//205     271     120     63      44      750     202     13      139     224
//252     580     723     468     668     325     139     62      584     896
//529     170     961     535     19      177     353     193     693     315
//90      218     179     838     961     336     634     117     515     841
//514     621     518     315     422     796     779     869     719     634
//99      548     14      917     784     264     89      911     565     513
//136     227     216     324     552     824     927     546     407     189
//177     834     121     134     823     901     723     542     570     331