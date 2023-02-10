//Lab Exercise 2.21.2022
//Author: nmessa

#include "inventory.h"

int main()
{
	Inventory test(1234, "Snickers Bar", 5674, 1.29);
	Inventory test2;
	test.printInventory();
	test2.printInventory();
	return 0;
}

//Output
//Item Number: 1234
//Item Name: Snickers Bar
//Quantity: 5674
//Unit Cost: 1.29
//Total Inventory Value: $7319.46
//
//
//Item Number: 0
//Item Name:
//Quantity: 0
//Unit Cost: 0.00
//Total Inventory Value: $0.00