// AP Computer Science Marine Biology Case Study program
// Copyright (C) 2000  College Board and Educational Testing Service

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// aquafish.cpp - copyright statement added 5/31/2000

#include <iostream>
using namespace std;
#include "aquafish.h"
#include "randgen.h"

AquaFish::AquaFish(int tankSize)
  : myPosition(tankSize/2),
    myTankSize(tankSize),
    myBumpCount(0),
    myDebugging(true)
{

}

void AquaFish::Swim()
{
  RandGen randomVals;
  int flip;

  if (myPosition == myTankSize - 1)
  {
    myPosition--;
  }
  else if (myPosition == 0)
  {
    myPosition++;
  }
  else
  {
    flip = randomVals.RandInt(2);
    
    if (flip == 0)
    {
      myPosition++;
    }
    else
    {
      myPosition--;
    }
  }
  
  if (myDebugging)
  {
    cout << "*** Position = " << myPosition << endl;
  }
  
  if (myPosition == 0 || myPosition == myTankSize - 1)
  {
    myBumpCount++;
  }
}

int AquaFish::BumpCount() const
{
  return myBumpCount;
}

