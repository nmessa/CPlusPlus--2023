//Date class definition file
//date.h
//Author: nmessa

#ifndef DATE_H
#define DATE_H
//#include <string>
//using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;

public:
	Date();
	Date(int, int, int);
	void print1();
	void print2();
	void print3();
};
#endif
