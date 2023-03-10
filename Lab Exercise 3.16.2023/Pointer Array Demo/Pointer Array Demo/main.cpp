//Using Pointers to print an array
//Author: nmessa
//Remember the name of an array is the address
//of the array

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Function prototypes
void fillArray(int []);
void printArray(int []);
void printArray2(int *);

const int SIZE = 100;

int main()
{
	
	int myArray[SIZE];	//Create an array reference
	srand(time(0));		//Initialize random number generator
	int *ptr;			//Create an integer pointer
	fillArray(myArray);	//Fill the array with random numbers
						//At this point ptr and myArray hold the same address
	ptr = myArray;		//Point at the array with the integer pointer
	printArray(myArray);	//Print the array in the traditional manner
	cout << "\n\n\n";
	printArray2(ptr);	//Print the array using pointers note that the array is passed a pointer
	return 0;
}

//Fill the array with random integers in the range of 1 to 1000
void fillArray(int a[])
{
	for (int index = 0; index < SIZE; index++)
		a[index] = rand()% 1000 + 1;
}

//Print the array in the traditional manner
void printArray(int a[])
{
	for (int index = 0; index < SIZE; index++)
	{
		//This is used to print array in 5 columns
		if (index % 5 == 0)
			cout << endl;
		//Print the array element
		cout << a[index] << '\t';
	}
	cout << endl;
}

//Print the array using pointers
void printArray2(int *p)
{
	//Create to integer pointers to point at first and last element of the array
	int *pFirst;
	int *pLast;
	int count = 0;  //This counter is only used to allow better formatting of output
	pFirst = p;					//Set pointer to the first element
	pLast = pFirst + SIZE - 1;	//Set pointer to the last element

	while (pFirst <= pLast)
	{
		//This is used to print array in 5 columns
		if (count % 5 == 0)
			cout << endl;

		//Output the element that the pointer pFirst is pointing at
		cout << *pFirst << '\t';
		pFirst++;				//Increment pointer to the next element
		count++;
	}
	cout << endl;
}

//Sample Output
//559     523     419     618     250
//460     967     340     172     394
//299     840     571     577     240
//274     615     267     337     961
//700     306     993     236     905
//292     718     849     872     445
//38      134     807     923     177
//652     175     54      983     824
//803     271     836     459     506
//827     72      501     609     287
//132     357     891     582     202
//797     410     769     156     492
//251     759     504     523     732
//901     235     244     289     631
//699     495     400     287     761
//879     386     229     639     237
//299     689     830     827     667
//981     940     388     62      406
//868     610     329     820     93
//744     326     744     760     154
//
//
//
//
//559     523     419     618     250
//460     967     340     172     394
//299     840     571     577     240
//274     615     267     337     961
//700     306     993     236     905
//292     718     849     872     445
//38      134     807     923     177
//652     175     54      983     824
//803     271     836     459     506
//827     72      501     609     287
//132     357     891     582     202
//797     410     769     156     492
//251     759     504     523     732
//901     235     244     289     631
//699     495     400     287     761
//879     386     229     639     237
//299     689     830     827     667
//981     940     388     62      406
//868     610     329     820     93
//744     326     744     760     154