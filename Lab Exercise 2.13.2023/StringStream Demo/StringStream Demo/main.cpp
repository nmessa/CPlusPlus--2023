//Demo program for converting numerics into C++ strings
#include <iostream>
#include <string>
#include <sstream>   //needed for stringstream objects
using namespace std;

int main()
{
	int month, day, year;
	string s1, s2, s3, s4;
	stringstream ss1, ss2, ss3;  //Create 3 string streams
	month = 2;
	day = 18;
	year = 2021;

	//put integer values into string streams
	ss1 << month;
	ss2 << day;
	ss3 << year;

	//Extract string versions of integers from the string stream
	s1 = ss1.str();
	s2 = ss2.str();
	s3 = ss3.str();

	//Build a new date string
	s4  = s1 + "/" + s2 + "/" + s3;

	cout << s4 << endl << endl << endl;

	//Now try with a double
	//Clear the string streams - two techniques
	ss1.str("");
	ss2.str(string());
	ss3.str(string());

	//Create 3 double variables and assign values
	double d1, d2, d3;
	d1 = 3.14;
	d2 = 2.71;
	d3 = 123.456;

	//Put doubles into string stream
	ss1 << d1;
	ss2 << d2;
	ss3 << d3;

	//Extract string versions of doubles from the string stream
	s1 = ss1.str();
	s2 = ss2.str();
	s3 = ss3.str();

	//Build and output new string
	s4 = "Pi = " + s1 + "\ne = " + s2 + "\n" + s3;
	cout << s4 << endl;
	return 0;
}

//Output
//2/18/2021
//
//
//Pi = 3.14
//e = 2.71
//123.456