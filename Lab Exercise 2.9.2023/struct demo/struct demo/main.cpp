#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	string id;
	double gpa;

	Student(string n, string i, double g)
	{
		name = n;
		id = i;
		gpa = g;
	}

	Student()
	{

	}

	void printStudent()
	{
		cout << name << endl;
		cout << id << endl;
		cout << gpa << endl << endl;
	}
};

Student findHighest(Student []);

int main()
{
	Student students[3];

	students[0] = Student("Jack Jones", "M1234", 3.45);
	students[1] = Student("Mary Astor", "M2345", 3.75);
	students[2] = Student("Danny Divito", "D5436", 2.45);

	for (int i = 0; i < 3; i++)
	{
		students[i].printStudent();
	}

	cout << "Most outstanding student: " << endl;
	findHighest(students).printStudent();
	return 0;
}

Student findHighest(Student s[])
{
	int maxIndex = 0;
	for (int i = 1; i < 3; i++)
	{
		if (s[i].gpa > s[maxIndex].gpa)
			maxIndex = i;
	}
	return s[maxIndex];
}