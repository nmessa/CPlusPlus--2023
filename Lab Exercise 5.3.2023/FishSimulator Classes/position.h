#ifndef _POSITION_H
#define _POSITION_H

/**
  * A Position represents a (row,column) in a grid
  * whose (0,0) is upper-left as in matrix coordinates.
  *
  * Once constructed, a position doesn't change
  * (all member functions are const), although
  * a Position can be assigned to an existing Position.
  * For example,
  *
  *    Position p(2,3);
  *    Position q;        // default  (-1,-1)
  *    q = p;             // q now at (2,3)
  *
  * Adjacent Positions of a given Position can be
  * determined as illustrated:
  *
  *    Position p(5,5);
  *    Position q;
  *
  *    q = p.North();    // q is (4,5)
  *    q = p.South();    // q is (6,5)
  *    q = p.East();     // q is (5,6)
  *    q = p.West();     // q is (5,4)
  *
  */

#include <iostream>
using namespace std;
#include "apstring.h"

class Position
{
  public:

    // constructors

    Position();
      // postcondition: Row() == -1, Col() == -1
    Position(int r, int c);
      // postcondition: Row() == r, Col() == c

    // accessing functions

    int Row() const;
      // postcondition: returns row of Position
    int Col() const;  
      // postcondition: returns column of Position

    Position North() const;
      // postcondition: returns Position north of (up from) this position
    Position South() const;
      // postcondition: returns Position south of (down from) this position
    Position East() const;
      // postcondition: returns Position east (right) of this position
    Position West() const;
      // postcondition: returns Position west (left) of this position

    bool Equals(const Position & rhs) const;
      // postcondition: returns true iff this position equals rhs

    apstring ToString() const;
      // postcondition: returns stringized form of Position

  private:
    int myRow;
    int myCol;
};

ostream & operator << (ostream & out, const Position & pos);
  // postcondition: pos inserted onto stream out

bool operator == (const Position & lhs, const Position & rhs);
  // postcondition: returns true iff lhs == rhs

#endif

