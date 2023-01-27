//Functions4.cpp
//Author: Mr. Messa
//Date: 2/5/2008
//This program demonstrates the use of function overloading
#include <iostream>
#include <cmath>
using namespace std;

//define a global constant
const double PI = 4*atan(1.0);

//Function prototypes
double area(double);
double area(double, double);

int main()
{
	//Declare variables
	double radius, length, width, circleArea, rectangleArea;

	//Find area of a circle and print out result
	cout << "Area of Circle" << endl;
	cout << "Enter the radius: ";
	cin >> radius;
	circleArea = area(radius);
	cout << "Circle Area = " << circleArea << endl;

	cout << "\n\n\n";
	//Find area of a rectangle and print out result
	cout << "Area of Rectangle" << endl;
	cout << "Enter the length: ";
	cin >> length;
	cout << "Enter the width: ";
	cin >> width;
	rectangleArea = area(length, width);
	cout << "Rectangle Area = " << rectangleArea << endl;

	return 0;
}

//Returns the area of a circle with a radius of r
double area(double r)
{
	double answer;
	answer = 2 * PI * pow(r, 2);
	return answer;
}

//Returns the area of a rectangle of length l and 
//width w
double area(double l, double w)
{
	double answer;
	answer = l * w;
	return answer;
}

/*Sample output
Area of Circle
Enter the radius: 3
Circle Area = 56.5487

Area of Rectangle
Enter the length: 5
Enter the width: 7
Rectangle Area = 35
Press any key to continue
*/
