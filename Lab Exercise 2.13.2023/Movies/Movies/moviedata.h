//moviedata.h
//Class definition file

#ifndef MOVIEDATA_H
#define MOVIEDATA_H

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class MovieData
{
private:
	string title;
	string director;
	int year;
	int runTime;

public:
	MovieData();
	MovieData(string, string, int, int);
	void displayMovie();
	string hoursMinutes(int);
};
#endif