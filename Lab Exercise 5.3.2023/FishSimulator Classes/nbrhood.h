#ifndef _NBRHOOD_H
#define _NBRHOOD_H

/**
  * Class Neighborhood represents a
  * collection of Positions.
  *
  * Positions can be added to a Neighborhood.
  * Each Position in a Neighborhood is accessible
  * via the functions Select() -- choose a Position --
  * and Size() -- return the # of Positions in a neighborhood.
  *
  * In the current implementation, a maximum of 4 Positions can be
  * added to a neighborhood.  Any call of Add() after the fourth
  * call is ignored.
  *
  */

#include <iostream>
using namespace std;
#include "position.h"
#include "apvector.h"
#include "apstring.h"

class Neighborhood
{
  public:

    // constructor

    Neighborhood();
      // postcondition: Size() == 0

    // accessing functions

    int Size() const;    // # Positions
      // postcondition: returns # Positions in the neighborhood

    Position Select(int index) const;    // access a Position
      // precondition:  0 <= index < Size()
      // postcondition: returns the index-th Position in Neighborhood

    apstring ToString() const;    // stringized representation
      // postcondition: returns a string version of all Positions
      //                in Neighborhood

    // modifying functions

    void Add(const Position & pos);        // add pos to neighborhood
      // precondition:  there is room in the neighborhood
      // postcondition: pos added to Neighborhood

  private:

    apvector<Position> myList;
    int myCount;
};

ostream & operator << (ostream & out, const Neighborhood & nbrhood);
  // postcondition: nbrhood inserted onto stream out

#endif


