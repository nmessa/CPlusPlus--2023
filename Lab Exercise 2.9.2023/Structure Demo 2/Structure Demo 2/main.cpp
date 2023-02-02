//Structure Demo using constructors

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

};

int main()
{
	Student student1("John Smith", 17, 3.25);   //Create structure using custom constructor
	Student student2;   //Create structure using default constructor

	cout << fixed << showpoint << setprecision(2);

	//Output data for student 1
	cout << "Name: " << student1.name << endl;
	cout << "Age: " << student1.age << endl;
	cout << "GPA: " << student1.gpa << endl;

	cout << endl << endl << endl;

	//Output data for student 2
	cout << "Name: " << student2.name << endl;
	cout << "Age: " << student2.age << endl;
	cout << "GPA: " << student2.gpa << endl;

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