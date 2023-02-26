//Frog class definition file
//frog.h
//Author: nmessa

#ifndef FROG_H
#define FROG_H

#include <iostream>
#include <string>
using namespace std;
class Frog
{
	static const int ROWS = 40;
	static const int COLS = 40;
	private:
		string name;
		char marsh[ROWS][COLS];
		int frow, fcol;
		double distance, maxDistance;

	public:
		Frog(string);
		void initialize();
		void jump();
		void display();
		double calcDistance();
};
#endif
