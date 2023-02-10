//Car class definition file
//car.h
//Author: nmessa

#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car
{
	private:
		int year;
		string make;
		int speed;
		int distance;
		double time;

	public:
		Car();
		Car(int, string, int);
		int getYear();
		string getMake();
		int getSpeed();
		void accelerate();
		void brake();
		void display();
		int getDistance();
		void popChute();
		bool checkFinish();
		void addTime();
		void update();
};

#endif
