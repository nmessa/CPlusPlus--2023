//Lab Exercise 4/19/2023
//Author: 

#include <iostream>
using namespace std;
#include "StringList.h"
void displayTable(StringList []);
void addEntry(string, StringList []);
void deleteEntry(string, StringList []);

int main()
{
	StringList hash[26];
	addEntry("Aaron", hash);
	addEntry("Charles", hash);
	addEntry("Elf", hash);
	addEntry("Elf", hash);
	addEntry("Ghana", hash);
	addEntry("Xaxon", hash);
	addEntry("Adams", hash);
	addEntry("Christi", hash);
	addEntry("Emmet", hash);
	addEntry("Grey", hash);
	addEntry("Xena", hash);
	addEntry("Alexis", hash);
	addEntry("Cleon", hash);
	addEntry("Epoch", hash);
	addEntry("Grimes", hash);
	addEntry("Xhoa", hash);
	addEntry("Mason", hash);
	addEntry("Frank", hash);
	addEntry("Alice", hash);
	addEntry("Gerry", hash);
	addEntry("Wilson", hash);
	addEntry("Mark", hash);
	displayTable(hash);
	deleteEntry("Adams", hash);
	deleteEntry("Sam", hash);

	cout << "\n\n\n";
	displayTable(hash);
	return 0;
}

//Displays the entire table using the StringList class displayList function
void displayTable(StringList arry[])
{
	//Add code here

}

//Adds an entry to the appropriate list using the StringList insertNode function
void addEntry(string name, StringList arry[])
{
	//Add code here

}

//Delete entry from the appropriate list using the StringList deleteNode function
void deleteEntry(string name, StringList arry[])
{
	//Add code here

}

//Output
//A List = Aaron --> Adams --> Alexis --> Alice
//B List = List is empty
//C List = Charles --> Christi --> Cleon
//D List = List is empty
//E List = Elf --> Elf --> Emmet --> Epoch
//F List = Frank
//G List = Gerry --> Ghana --> Grey --> Grimes
//H List = List is empty
//I List = List is empty
//J List = List is empty
//K List = List is empty
//L List = List is empty
//M List = Mark --> Mason
//N List = List is empty
//O List = List is empty
//P List = List is empty
//Q List = List is empty
//R List = List is empty
//S List = List is empty
//T List = List is empty
//U List = List is empty
//V List = List is empty
//W List = Wilson
//X List = Xaxon --> Xena --> Xhoa
//Y List = List is empty
//Z List = List is empty
//
//
//
//A List = Aaron --> Alexis --> Alice
//B List = List is empty
//C List = Charles --> Christi --> Cleon
//D List = List is empty
//E List = Elf --> Elf --> Emmet --> Epoch
//F List = Frank
//G List = Gerry --> Ghana --> Grey --> Grimes
//H List = List is empty
//I List = List is empty
//J List = List is empty
//K List = List is empty
//L List = List is empty
//M List = Mark --> Mason
//N List = List is empty
//O List = List is empty
//P List = List is empty
//Q List = List is empty
//R List = List is empty
//S List = List is empty
//T List = List is empty
//U List = List is empty
//V List = List is empty
//W List = Wilson
//X List = Xaxon --> Xena --> Xhoa
//Y List = List is empty
//Z List = List is empty