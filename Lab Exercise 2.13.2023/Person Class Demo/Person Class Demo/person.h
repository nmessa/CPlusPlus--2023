//person.h
//Class definition file

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person();
	Person(string, int);
	void displayPerson();
	string getName();
	int getAge();
	void changeName(string);
	void birthDay();
};
#endif