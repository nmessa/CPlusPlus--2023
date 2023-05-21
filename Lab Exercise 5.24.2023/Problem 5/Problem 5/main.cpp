//Lab Exercise 5.24.2023 Problem 5
//Author: nmessa

#include <iostream>
using namespace std;

bool functionFive(int[], int);
int main()
{
	int arr1[] = {3, 5, 1, 5, 3, 5, 7, 5, 1, 5};
	int arr2[] = {3, 5, 5, 5, 5, 5, 5};
	int arr3[] = {3, 5, 2, 5, 4, 5, 7, 5, 8, 5};
	int arr4[] = {2, 4, 5, 5, 5, 5};
	int arr5[] = {3, 5, 5, 5, 5, 5, 5, 5, 5, 5};

	cout << boolalpha;
	cout << functionFive(arr1, sizeof(arr1)/sizeof(arr1[0])) << endl;
    cout << functionFive(arr2, sizeof(arr2)/sizeof(arr2[0])) << endl;
    cout << functionFive(arr3, sizeof(arr3)/sizeof(arr3[0])) << endl;
    cout << functionFive(arr4, sizeof(arr4)/sizeof(arr4[0])) << endl;
    cout << functionFive(arr5, sizeof(arr5)/sizeof(arr5[0])) << endl;
	return 0;
}

bool functionFive(int arr[], int size)
{
    int count = 0;
    //Check for adjacent fives
    //Add code here


    //Check for 5 fives;
    //Add code here

}

//Output
//true
//false
//true
//false
//false