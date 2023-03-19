//Lab Exercise 3/23/2023 Problem 4
//Author: 

#include <iostream>
using namespace std;
int rowCheck(int [][3]);
int colCheck(int [][3]);

int main()
{
	int grid[3][3]={{43, 38, 28}, {35, 57, 15}, {31, 14, 64}};
	int shouldBe;
	int row = rowCheck(grid);
	int col = colCheck(grid);
	shouldBe = 109 - (grid[row][0] + grid[row][1] + grid[row][2]) + 
		grid[row][col];
	cout << "The value at row " << row+1 << " and column " <<
		col+1 << " should be " << shouldBe << endl;
	return 0;
}

int rowCheck(int ary[][3])
{
	int badRow;
	//Add code here

	return badRow;
}

int colCheck(int ary[][3])
{
	int badCol;
	//Add code here

	return badCol;
}

//Output
//The value at row 2 and column 3 should be 17