/********************************************************************  
**	FROGHOP.CPP		By: Mr. Messa			12/4/2001	           **
** 	This program simulate the random movement of a frog in a pond  **
** 	this technique may be used to simulate an ecosystem 		   **
********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#define ROWS 40
#define COLS 40

// Function prototypes
void initialize(char [][40]);
void jump(char [][40], int &, int &);
void display(char [][40]);
float distance(int, int);

int main()
{
	char marsh[ROWS][COLS];
	int steps, frow = 20, fcol = 20, index;
	float dist, maxDistance=0.0;
	printf("How many steps in your simulation?\n");
	scanf("%d", &steps);
	srand(time(NULL));
	initialize(marsh);
	marsh[frow][fcol]='F';
	for (index = 1; index <= steps; index++)
	{
		//system("CLS");  //for debugging
		jump(marsh, frow, fcol);
		//display(marsh);  //for debugging
		dist = distance(frow, fcol);
		if (dist > maxDistance)
			maxDistance = dist;
	}
	marsh[20][20] = 'S';
	system("CLS");
	display(marsh);
	printf("You wandered %f away from home\n\n" , maxDistance);
	return 0;
}


//  This function initializes the array
void initialize(char m[][COLS])
{
	int i, j;
	for(i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			m[i][j] = '_';
}

//  This function moves the frog 1 unit in a random direction
//  The function also marks the location where the frog has been
void jump(char m[][COLS], int &frow, int &fcol)
{
	int rnumber;
	rnumber = rand() % 5 + 1;
	switch (rnumber)
	{
		case 1: 	break;
		case 2:  if (frow == ROWS-1)
				break;
			m[frow][fcol] = '*';
			frow++;
			m[frow][fcol] = 'F';
			break;
		case 3:  if (frow == 0)
				break;
			m[frow][fcol] = '*';
			frow--;
			m[frow][fcol] = 'F';
			break;
		case 4:  if (fcol == COLS-1)
				break;
			m[frow][fcol] = '*';
			fcol++;
			m[frow][fcol] = 'F';
			break;
		case 5:  if (fcol == 0)
				break;
			m[frow][fcol] = '*';
			fcol--;
			m[frow][fcol] = 'F';
			break;
	}
}


// This function displays the pond
void display(char m[][40])
{
	int i, j;
	for(i=0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%c", m[i][j]);
		printf("\n");
	}
}

// This function calculates the distance the frog is from the 
// starting point
float distance(int frow, int fcol)
{
	return sqrt(pow(abs(frow-20), 2.0)+ pow(abs(fcol-20), 2.0));
}
