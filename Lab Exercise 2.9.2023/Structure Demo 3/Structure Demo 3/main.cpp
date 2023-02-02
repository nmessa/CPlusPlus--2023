//Structure Demo using constructors
// with a member function

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Define a structure data type Student
struct Student
{
	string name;
	int age;
	double gpa;

	//Default constructor
	Student()
	{
		name = "";
		age = 0;
		gpa = 0.0;
	}

	//Custom constructor
	Student(string n, int a, double g)
	{
		name = n;
		age = a;
		gpa = g;
	}

	void printStructure()
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "GPA: " << gpa << endl;

		cout << endl << endl << endl;
	}

};

int main()
{
	Student student1("John Smith", 17, 3.25);   //Create structure using custom constructor
	Student student2;   //Create structure using default constructor

	//Output data for student 1
	student1.printStructure();

	//Output data for student 2
	student2.printStructure();

	return 0;
}

//Output
//Name: John Smith
//Age: 17
//GPA: 3.25
//
//
//Name:
//Age: 0
//GPA: 0.00