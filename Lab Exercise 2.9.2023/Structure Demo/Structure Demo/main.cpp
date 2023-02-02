//Structure demo without constructors

#include <iostream>
#include <string>
using namespace std;

//Define a structure data type Student
struct Student
{
	string name;
	int age;
	double gpa;
};

int main()
{
	Student student1, student2;   //Create two structures
	string dummy;

	//Get data for student 1
	cout << "Enter the name of student 1: ";
	getline(cin, student1.name);
	cout << "Enter the age of student 1: ";
	cin >> student1.age;
	cout << "Enter the GPA of student 1: ";
	cin >> student1.gpa;

	getline(cin, dummy); //strip off the newline character from the keyboard buffer

	//Get data for student 2
	cout << "Enter the name of student 2: ";
	getline(cin, student2.name);
	cout << "Enter the age of student 2: ";
	cin >> student2.age;
	cout << "Enter the GPA of student 2: ";
	cin >> student2.gpa;

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

//Sample Output
//Enter the name of student 1: Joe Smith
//Enter the age of student 1: 17
//Enter the GPA of student 1: 3.14
//Enter the name of student 2: Mary Jones
//Enter the age of student 2: 18
//Enter the GPA of student 2: 3.52
//Name: Joe Smith
//Age: 17
//GPA: 3.14
//
//Name: Mary Jones
//Age: 18
//GPA: 3.52