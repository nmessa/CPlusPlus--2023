//Lab Exercise 3/7/2023
//Author: nmessa

#include <iostream>
#include "frog.h"
#include "conio.h"
using namespace std;

int main()
{
	int steps;
	Frog myFrog("myFrog");
	Frog kermit("Kermit");
	cout << "How many steps do you want in your simulation? ";
	cin >> steps;
	for (int i = 1; i <= steps; i++)
	{
		myFrog.jump();
		kermit.jump();
		//myFrog.display();
	}
	myFrog.display();
	cout << "Hit any key to continue ";
	getch();
	kermit.display();
	return 0;
}

//Sample Output
//This is myFrog's swamp
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//                                    * *
//                                    * * *
//                                  * * * *
//                                  * * * S
//                            * * * * * *
//                            * * *
//                            * * * *
//                            * * * *
//                                * *
//                                * *
//                                * * F
//
//
//
//
//
//This is Kermit's swamp
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//                                        F     * *
//                                        * * * * * * *
//                                          * * * * * *
//                                          * * * * * *
//                                        * * * * * * *
//                                        S   * * * * *
//                                                * * *
//
//
