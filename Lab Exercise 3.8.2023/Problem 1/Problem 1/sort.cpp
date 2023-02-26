/*************************************************************
**		SORT.CPP		By: Mr. Messa	6/15/99			    **
**		This program demonstrates a variety of sorting 	    **
**		algorithms; bubble, selection, insertion, 			**
**		quicksort, and mergesort.  This program is written  **
**		in C++ using standard C-style arrays				**
*************************************************************/
#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
using namespace std;

// Global variables and constants
const int SIZE = 10000;
long count;

// Function prototypes
void fillArray (int []);
void screenOutput (const int []);
void swap (int &, int &);
void bubbleSort (int []);
void selectionSort (int []);
//void selectionSort (int [], int , int );
void insertionSort (int []);
void mergeSort(int [], int, int);
void quickSort (int [], int, int);
void sortMenu (int []);
void merge(int [], int, int, int);

int main()
{
	int list[SIZE+1];
	srand(time(0));
	sortMenu(list);
	return 0;
}

// This function initializes the array
void fillArray (int temp[])
/* Asks the user for two inputs:  1)  the number of data to generate, and
	2) the largest possible random integer to create.  Then proceeds to fill
	the array, from 1..number, where number is stored in temp[0]. */
{
	int  size;

	cout << "How many numbers to you wish to generate? ";
	cin >> temp[0];
	cout << "\nLargest integer to generate? ";
	cin >> size;
	for (int loop=1; loop<=temp[0]; loop++)
		temp[loop] = rand() % size + 1;
}

void screenOutput (const int temp[])
// prints out the contents of the array in tabular form, 12 columns
{
	cout << endl << endl;
	for (int loop=1; loop<=temp[0]; loop++)
	{
		cout.width(6);       // format for 6 spaces
		cout << temp[loop];
		if (loop % 12 == 0)
			cout << endl;
	}
	cout << endl;
}

// This function will swap two variables sent to it
void swap (int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

// This function implements the Bubble Sort algorithm
void bubbleSort (int list[])
{
	count = 0;
	cout << "\nBubble Sort\n\n";
	for (int outer=1; outer <= list[0]-1; outer++)
	{
		for (int inner = 1; inner <= list[0]-outer; inner++)
		{
			count++;
			if (list[inner] > list[inner+1])
			{
				swap(list[inner], list[inner+1]);
				count += 3;
			}
		}
	}
	cout << "Bubble sort completed " << count
			<< " operations performed" << endl;
}

// This function implements the Selection Sort algorithm
void selectionSort (int list[])
{
	count = 0;
	int flag;
	cout << "\nSelection Sort" << endl << endl;
	for (int outer = 1; outer < list[0]; outer++)
	{
		flag = outer;
		for (int inner = outer+1; inner <= list[0]; inner++)
		{
			if(list[inner] < list[flag])
			{
				flag = inner;
				count++;
			}
			count++;
		}
		swap(list[outer], list[flag]);
		count += 3;
	}
	cout << "Selection sort completed " << count
			<< " operations performed" << endl;
}

// Alternative Selection Sort function
/*
void selectionSort (int list[], int i, int j)
{
	count = 0;
	int flag;
	cout << "\nSelection Sort" << endl << endl;
	for (int outer = i; outer < j; outer++)
	{
		flag = outer;
		for (int inner = outer+1; inner <= j; inner++)
		{
			if(list[inner] < list[flag])
			{
				flag = inner;
				count++;
			}
			count++;
		}
		swap(list[outer], list[flag]);
		count += 3;
	}
	cout << "Selection sort completed " << count
			<< " operations performed" << endl;
}*/

// This function implements the Insertion Sort algorithm
void insertionSort (int list[])
{
	count = 0;
	int outer, pos, temp;
	cout << "\nInsertion Sort" << endl << endl;
	for (outer=2; outer <= list[0]; outer++)
	{
		pos = outer;
		temp = list[pos];
		count += 2;
		while ( (pos > 1) && (list[pos-1] > temp))
		{
			list[pos] = list[pos-1];
			pos--;
			count += 2;
		}
		list[pos] = temp;
		count++;
	}
	cout << "Insertion  sort completed " << count
			<< " operations performed" << endl;
}

// This function implements a recursive Merge Sort algorithm
void mergeSort(int list[], int first, int last)
{
	int mid;
	if (first == last);
	else
	{
		if (first+1 == last)
		{
			if (list[first] > list[last])
			{
				swap(list[first], list[last]);
				count += 3;
			}
		}
		else
		{
			mid = (first + last)/2;
			count++;
			mergeSort(list, first, mid);
			mergeSort(list, mid+1, last);
			merge(list, first, mid, last);
		}
	}
}

// This function implements the QuickSort algorithm
void quickSort (int list[], int first, int last)
{
	int g = first, h = last;
	int midIndex, dividingValue;
	midIndex = (first+last)/2;
	dividingValue = list[midIndex];
	count += 2;
	do
	{
		while(list[g] < dividingValue)
		{
			g++;
			count++;
		}
		while(list[h] > dividingValue)
		{
			h--;
			count++;
		}
		if (g <= h)
		{
			swap(list[g], list[h]);
			g++;
			h--;
			count += 5;
		}
	}while(g < h);
	if(h > first)
		quickSort(list, first, h);
	if(g < last)
		quickSort(list, g, last);
}

// This function provides a menu to the user to select algorithm
// to use
void sortMenu (int temp[])
{
	char choice, print;
	do
	{
		cout << "Sorting algorithm menu" << endl << endl;
		cout << "(1) Bubble sort" << endl;
		cout << "(2) Selection sort" << endl;
		cout << "(3) Insertion sort" << endl;
		cout << "(4) Recursive mergesort" << endl;
		cout << "(5) Quicksort" << endl;
		cout << "(6) Quit" << endl << endl;
		cout << "Choice ---> ";
		choice = (char)getch();
		cout << endl << endl;
		if ('1'<=choice && choice<='5')
		{
			fillArray(temp);
			switch (choice)
			{
				case '1' : bubbleSort(temp); break;
				case '2' : selectionSort(temp); break;
				case '3' : insertionSort(temp); break;
				case '4' : count = 0;
							  mergeSort(temp, 1, temp[0]);
							  cout <<"Mergesort completed " << count
							  << " operations performed" << endl;
							  break;
				case '5' : count = 0;
							  quickSort(temp, 1, temp[0]);
							  cout << "Quicksort completed " << count
							  << " operations performed" << endl;
							  break;
			}
			cout << "\nPrint list to screen (y/n)? ";
			print = (char)getch();
			if (print == 'y' || print == 'Y')
				screenOutput(temp);
			cout << "Hit return to continue ";
			getch();
		}
	}
	while (choice != '6');
	
	cout << "\n\nBye-bye\n";
}

// This function is used by the recursive merge sort
// to merge the contents in two temporary arrays
void merge(int A[], int first, int mid, int last)
{
	int temp[SIZE+1];
	int aPtr = first;
	int bPtr = mid+1;
	int cPtr = first;
	int total = last-first+1;
	int loop;
	int doneA = 0, doneB = 0;
	for (loop=1; loop<=total; loop++)
	{
		if (doneA)     // Get number from B part of array
		{
			temp[cPtr] = A[bPtr];
			bPtr++;
			count += 2;
		}
		else
			if(doneB)   // Get number form A part of array
			{
				temp[cPtr] = A[aPtr];
				aPtr++;
				count += 2;
			}
			else
				if(A[aPtr] < A[bPtr])   // Get number from A and move index
				{
					temp[cPtr] = A[aPtr];
					aPtr++;
					count += 2;
				}
				else        // Get number form B and move index
				{
					temp[cPtr] = A[bPtr];
					bPtr++;
					count += 2;
				}
			cPtr++;
			count++;
			if(aPtr > mid)
			{
				doneA = 1;
				count++;
			}
			if(bPtr > last)
			{
				doneB = 1;
				count++;
			}
		}
		for(loop = first; loop <= last; loop++)
		{
			A[loop] = temp[loop];
			count++;
		}
}



