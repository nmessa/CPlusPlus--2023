#ifndef _UTILS_H
#define _UTILS_H

#include "apstring.h"
#include "apvector.h"
#include "fish.h"

// Collection of useful utility functions

apstring IntToString(int n);
  // postcondition: returns stringized form of n

void Sort(apvector<Fish> & list, int numElts);
  // precondition:  list contains numElts Fish
  // postcondition: list sorted so that entries are
  //                in order top-down/left-right by Position

void DebugPrint(int level, const apstring & msg);
  // print the given debugging error message if level is low enough
  //   (which levels are actually printed can be set in utils.cpp)

#endif

