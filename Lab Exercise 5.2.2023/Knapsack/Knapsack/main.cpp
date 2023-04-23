//Lab Exercise 5.2.2023 Problem 2 - Basic
//Author: 

#include<iostream>
 
using namespace std;

const int SIZE = 3;  //Determines the max number of items knapsack can hold
 
int max(int, int);
int knapSack(int, int [], int [], int);

// Driver program to test function
int main()
{ 
	//Test Code
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;

    cout << "The value of the material in the knapsack is $" << knapSack(W, wt, val, SIZE) << endl;
 
    return 0;
}

// A utility function that returns maximum of two integers
int max(int a, int b)
{
    //Add code here

}
 
// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
    // Base Case
    //Add code here

 
    // If weight of the nth item is more than Knapsack capacity W, then
    // this item cannot be included in the optimal solution
    //Add code here

 
    // Return the maximum of two cases: (1) nth item included (2) not included
    //Add code here

}

//Output
//The value of the material in the knapsack is $220



//TO DO:
//Get rid of the test code and add code to allow the user ot enter values as shown below
//Sample output
//Enter value and weight for item 1:4 6
//Enter value and weight for item 2:5 4
//Enter value and weight for item 3:13 5
//Enter the capacity of knapsack? 10
//The value of the material in the knapsack is $18