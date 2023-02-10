//Inventory Class Definition File
//inventory.h
//Author: nmessa

#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>
using namespace std;

class Inventory
{
private:
	int itemNumber;
	string itemName;
	int quantity;
	double cost;
	double totalCost;
	void setItemNumber(int);
	void setName(string);
	void setQuantity(int);
	void setCost(double);
	void setTotalCost();

public:
	Inventory();
	Inventory(int, string, int, double);
	int getItemNumber();
	string getItemName();
	int getQuantity();
	double getCost();
	double getTotalCost();
	void printInventory();
};

#endif
