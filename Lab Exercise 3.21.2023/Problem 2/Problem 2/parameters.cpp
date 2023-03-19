//Lab Exercise 3.21.2023 Problem 2
//Author: 

/* parameters.cpp, 
demonstrate calling functions by value, by pointers, and by references */ 
#include <iostream>
using namespace std;

//Function Prototypes
int add(int, int) ;
void swap(int *, int *); 
void dec(int &); 
void inc(int &); 

int main() 
{ 
  int num1, num2; 
  int result; 
  cout << "\nEnter two numbers separated by a space: " << endl; 
  cin >> num1 >> num2;
  cout << "\n num1 is " << num1 << ", num2 is " << num2 << endl;

  /* Alter and complete the rest of the code to 
     test the add, swap, decrement, and increment functions and
     also display each result */ 

	//Add code here


  return 0;
} //end of main

// add two numbers together and return the result
int add(int x, int y) 
{ 
	//Add code here

} 

//take two pointer references to integers and swap their values
void swap(int *x, int *y) 
{ 
  //Add code here

} 

//takes one integer by reference and decrements the value pointed to by x  
void dec(int &x) 
{ 
	//Add code here

} 

//takes one integer by reference and increments the value pointed to by x 
void inc(int &x) 
{ 
	//Add code here

} 

//Sample Output
//Enter two numbers separated by a space:
//3 5
//
// num1 is 3, num2 is 5
//
// result is 8
//
//num1 = 5
//num2 = 3
//
//num1 = 4
//
//num2 = 4