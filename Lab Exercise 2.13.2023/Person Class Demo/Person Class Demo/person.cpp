//person.cpp
//Class implementation file

#include "person.h"

Person::Person()
{
	name = "John Doe";
	age = 0;
}

Person::Person(string n, int a)
{
	name = n;
	age = a;
}

void Person::displayPerson()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

string Person::getName()
{
	return name;
}

int Person::getAge()
{
	return age;
}

void Person::changeName(string n)
{
	name = n;
}

void Person::birthDay()
{
	age++;
}