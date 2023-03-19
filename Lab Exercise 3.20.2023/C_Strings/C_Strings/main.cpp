//Demo to show real old style C strings
//Still works in modern Visual Studio

#include <iostream>
//#include <cstring> //modern way
using namespace std;

#include <string.h> //old school way

int main()
{
	char name[30];
	char alias[30];
	char str[30];
	int length;
	int difference;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Hello " << name << endl;
	length = strlen(name);
	strcpy(alias, name);
	difference = strcmp("Fred", name);
	cout << "Length of name = " << length << endl;
	cout << "A copy of name is " << alias << endl;
	cout << name << " differs from Fred by " << difference << endl;
	strcat(name, alias);
	cout << name << endl;

	return 0;
}

//Sample Output
//Enter your name: Joe
//Hello Joe
//Length of name = 3
//A copy of name is Joe
//Joe differs from Fred by -1
//JoeJoe