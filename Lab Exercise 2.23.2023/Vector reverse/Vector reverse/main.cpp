//Vector class demo showing the use of an iterator
//also demonstrates the passing of a vector to a function
//by value and by reference
#include <iostream>
#include <vector>
using namespace std;
#define SIZE 10

void displayVector(vector<int>);
void reverseVector(vector<int> &);

int main ()
{
  vector<int> myVector;
  
  for (int i = 1; i <= SIZE; i++)       //Fill the vector
	  myVector.push_back(i);

  cout << "myVector contains:" << endl; //Display vector
  displayVector(myVector);
  cout << endl;


  //Display the vector forward using an iterator
  cout << "Displaying the vector forwards using an iterator ....." << endl;
  vector<int>::iterator it;
  for (it = myVector.begin(); it < myVector.end(); it++)
	cout << *it << "  ";
  cout << endl << endl;

  //Display the vector backwards using an iterator
  cout << "Displaying the vector backwards using an interator....." << endl;
  vector<int>::reverse_iterator rit;
  for ( rit=myVector.rbegin() ; rit < myVector.rend(); rit++ )
    cout << *rit << "  ";
  cout << endl << endl;

  //Show contents of the vector
  cout << "The vector contains: " << endl;
  displayVector(myVector);

  //Pass the vector to a function to reverse it
  cout << "Reversing the vector using reverseVector function....." << endl;
  reverseVector(myVector);
  cout << "The vector now contains: " << endl;
  displayVector(myVector);

  //Reverse the vector using vector class method
  cout << "Reversing the vector using reverse vector class method....." << endl;
  reverse(myVector.begin(), myVector.end());
  cout << "The vector now contains: " << endl;
  displayVector(myVector);

  return 0;
}

void displayVector(vector<int> nums)
{
	for (int i = 0; i < nums.size(); i++)
		cout << nums[i] << "  ";
	cout << endl;
}

void reverseVector(vector<int> &nums)
{
	vector<int> bNums;                    //Create temporary vector
	bNums.resize(nums.size());			//Make the same size
	for (int i = 0; i < nums.size(); i++)	//copy vector backwards
		bNums[bNums.size()-i-1] = nums[i];
	for (int i = 0; i < nums.size(); i++)	//copy backwords vector
		nums[i] = bNums[i];					//into original vector
}

//Output
//myVector contains:
//1  2  3  4  5  6  7  8  9  10
//
//Displaying the vector forwards using an iterator .....
//1  2  3  4  5  6  7  8  9  10
//
//Displaying the vector backwards using an interator.....
//10  9  8  7  6  5  4  3  2  1
//
//The vector contains:
//1  2  3  4  5  6  7  8  9  10
//Reversing the vector using reverseVector function.....
//The vector now contains:
//10  9  8  7  6  5  4  3  2  1
//Reversing the vector using reverse vector method.....
//The vector now contains:
//1  2  3  4  5  6  7  8  9  10