//Lab Exercise 2.15.2023 Problem 3
//Author: nmessa

//This program is a driver program to test the Car and DragRace classes
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "car.h"
#include "dragrace.h"

int main()
{
	srand(time(0));
	Car joe(2018, "Ferrari", rand()%20 + 60); 
	Car jack(2017, "Toyota", rand()%20 + 60);
	DragRace myRace(joe, jack);
	myRace.race();
	return 0;
}

//Sample Output
//Feet down track
//Car 1   Car 2
//6       6
//13      14
//21      23
//31      34
//42      47
//54      60
//67      73
//84      90
//101     107
//119     127
//138     146
//158     166
//179     192
//204     215
//226     238
//251     264
//278     289
//309     315
//340     345
//374     382
//411     417
//442     453
//476     489
//518     528
//562     572
//598     608
//634     656
//683     697
//730     739
//771     786
//821     837
//873     892
//927     950
//979     999
//1032    1060
//1080    1116
//1143    1176
//1197    1231
//1251    1298
//1304    1360
//Car 2 wins
//Car 2 wins