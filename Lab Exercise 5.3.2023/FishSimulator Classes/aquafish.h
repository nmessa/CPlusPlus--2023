// AP Computer Science Marine Biology Case Study program
// Copyright (C) 2000  College Board and Educational Testing Service

// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// aquafish.h - copyright statement added 5/31/2000
//#include "Bool.h"
#ifndef _AQUAFISH_H
#define _AQUAFISH_H

class AquaFish
{
  public:
    AquaFish(int tankSize);
    void Swim();               // Swim one foot.
    int BumpCount() const;     // Return the bump count.

  private:
    int myPosition;
    int myBumpCount;
    int myTankSize;
    bool myDebugging;
};

#endif

