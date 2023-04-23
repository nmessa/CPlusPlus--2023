// AP Computer Science Marine Biology Case Study program
// Copyright (C) 2000  College Board and Educational Testing Service

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// randgen.cpp - comments fixed, copyright statement added 5/31/2000

#include <time.h>                // for time()
#include <stdlib.h>              // for rand/srand
#include "randgen.h"

int RandGen::ourInitialized = 0;

// constructors

RandGen::RandGen()
// postcondition: system srand() used to initialize seed
//                once per program     
{
  if (0 == ourInitialized)
  {
    ourInitialized = 1;        // only call srand once
    srand(unsigned(time(0)));  // randomize
  }
}

RandGen::RandGen(int seed)
// postcondition: system srand() used to initialize seed
//                once per program     
{
  if (0 == ourInitialized)
  {
    ourInitialized = 1;        // only call srand once
    srand(seed);               // randomize
  }
}

// public accessing functions

int RandGen::RandInt(int max)
// precondition: max > 0
// postcondition: returns int in [0..max)     
{  
  return int(RandReal() * max);
}

int RandGen::RandInt(int min, int max)
// precondition: min <= max     
// postcondition: returns int in [min..max]     
{ 
  return min + RandInt(max - min + 1);
}

double RandGen::RandReal()
// postcondition: returns double in [0..1)     
{     
  // RAND_MAX is defined in <stdlib.h>
  return rand() / (double(RAND_MAX) + 1); 
}

double RandGen::RandReal(double dmin, double dmax)
// precondition: dmin <= dmax     
// postcondition: returns double in [dmin..dmax)     
{
  double width = dmax - dmin;
  return RandReal() * width + dmin;
}
