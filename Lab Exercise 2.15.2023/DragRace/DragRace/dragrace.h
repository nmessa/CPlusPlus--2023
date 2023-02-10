//DragRace class definition file
//dragrace.h
//Author: nmessa

#ifndef DRAGRACE_H
#define DRAGRACE_H

#include "car.h"

class DragRace
{
	private:
		Car car1;
		Car car2;
	public:
		DragRace();
		DragRace(Car, Car);
		void race();
		void checkWinner();
		
};

#endif