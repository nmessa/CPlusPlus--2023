//Lab Exercise 3/27/2023
//Author: 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//Data structure definition
struct Inventory
{
	//Declare structure members
	//Add code here


	//Structure constructor
	Inventory(string d, string pn, int q, double ws, double ret, 
		string dt)
	{
		//Add code here

	}
};

//Function prototypes
void printRecords(vector<Inventory>);
void addRecord(vector<Inventory> &);	//reference parameter
void loadRecords(vector<Inventory> &);	//reference parameter
void editRecord(vector<Inventory> &);	//reference parameter
void displayRecord(vector<Inventory>);
void update(vector<Inventory>);

int main()
{
	vector<Inventory> wallyWorld;

	//Test all functions
	loadRecords(wallyWorld);
	printRecords(wallyWorld);
	//Uncomment to test various functions
	//editRecord(wallyWorld);
	//printRecords(wallyWorld);
	//displayRecord(wallyWorld);
	//addRecord(wallyWorld);
	//printRecords(wallyWorld);
	return 0;
}

//Display all records in database
void printRecords(vector<Inventory> ww)
{
	//Add code here

}

//Add a record to the database and update file
void addRecord(vector<Inventory> &ww)
{
	string d, pn, dt;
	//Add code here

}

//Load data from file into database
void loadRecords(vector<Inventory> &ww)
{
	//Add code here

}

//Edit a record in the database and update file
void editRecord(vector<Inventory> &ww)
{
	//Add code here

}

//Display an individual record
void displayRecord(vector<Inventory> ww)
{
	//Add code here

}

//Update database to disk file
void update(vector<Inventory> ww)
{
	//Add code here


}

//Output
//Record 1
//Description: Flashlight
//Part number: A1356
//Quantity: 28
//Wholesale price: 10.95
//Retail price: 14.95
//Aquisition date: 4/13/2015
//
//Record 2
//Description: Screwdriver
//Part number: B729
//Quantity: 38
//Wholesale price: 3.95
//Retail price: 4.95
//Aquisition date: 4/13/2015
//
//Record 3
//Description: shovel
//Part number: G7163
//Quantity: 12
//Wholesale price: 42.99
//Retail price: 52.99
//Aquisition date: 4/10/2017
//
//Record 4
//Description: Drive Axle
//Part number: A5674
//Quantity: 17
//Wholesale price: 85.78
//Retail price: 99.95
//Aquisition date: 1/1/2012
//
//Record 5
//Description: Automobile
//Part number: C1343
//Quantity: 3
//Wholesale price: 34978.5
//Retail price: 41234.6
//Aquisition date: 4/13/2015
//
//Record 6
//Description: Frog
//Part number: X16
//Quantity: 87
//Wholesale price: 1.99
//Retail price: 3.99
//Aquisition date: 4/1/2017
//
//Record 7
//Description: Widget
//Part number: XC54
//Quantity: 12
//Wholesale price: 3.55
//Retail price: 6.59
//Aquisition date: 3/30/2016