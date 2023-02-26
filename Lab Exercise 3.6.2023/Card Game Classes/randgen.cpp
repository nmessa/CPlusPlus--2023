//Randgen class implementation file
//randgen.cpp
//Author: nmessa

#include <ctime>                // for time()
#include <cstdlib>              // for rand/srand
#include "randgen.h"
#include <cmath>
using namespace std;

int RandGen::ourInitialized = 0;

void RandGen::setSeed(int seed)
// postcondition: system srand() used to initialize seed
//                once per program (this is a static function)    
{
    if (0 == ourInitialized)
    {   ourInitialized = 1;   // only call srand once
	srand(seed);          // randomize
    }
}


RandGen::RandGen()
// postcondition: system srand() used to initialize seed
//                once per program     
{
    if (0 == ourInitialized)
    {   ourInitialized = 1;          // only call srand once
        srand((time(0)));    // randomize
    }
}

int RandGen::randInt(int max)
// precondition: max > 0
// postcondition: returns int in [0..max)     
{  
    return int(randReal() * max);
}

int RandGen::randInt(int low, int max)
// precondition: low <= max     
// postcondition: returns int in [low..max]     
{ 
    return low + randInt(max-low+1);
}

double RandGen::randReal()
// postcondition: returns double in [0..1)     
{     
    return rand() / (double(RAND_MAX) + 1); 
}

double RandGen::randReal(double low, double high)
{
    double width = fabs(high-low);
    double thelow = low < high ? low : high;
    return randReal()*width + thelow;
}
