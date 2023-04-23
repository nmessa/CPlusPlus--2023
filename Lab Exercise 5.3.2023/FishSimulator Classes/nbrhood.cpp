#include "nbrhood.h"
#include "utils.h"

// constructor

Neighborhood::Neighborhood()
  : myList(4),
    myCount(0)
// postcondition: Size() == 0    
{

}

// public accessing functions

int Neighborhood::Size() const
// postcondition: returns # Positions in the neighborhood  
{
  return myCount;
}

Position Neighborhood::Select(int index) const
// precondition:  0 <= index < Size()
// postcondition: returns the index-th Position in Neighborhood  
{
  DebugPrint(5, "Selecting neighborhood element # " + IntToString(index));
  return myList[index];
}


apstring Neighborhood::ToString() const
// postcondition: returns a string version of all Positions in Neighborhood
{
  apstring s = "Neighborhood: ";
  int k;
  for (k = 0; k < myCount; k++)
  {
    s += myList[k].ToString() + " ";
  }
  return s;
}

// public modifying function

void Neighborhood::Add(const Position & pos)
// precondition:  there is room in the neighborhood
// postcondition: pos added to Neighorhood  
{
  if (myCount < myList.length())
  {
    DebugPrint(5, "Adding " + pos.ToString() + " to neighborhood.");
    myList[myCount] = pos;
    myCount++;
  }
  else
  {
    DebugPrint(5, "Neighborhood had no room for " + pos.ToString());
  }
}

// free function

ostream & operator << (ostream & out, const Neighborhood & nbrhood)
// postcondition: nbrhood inserted onto stream out  
{
  out << nbrhood.ToString();
  return out;
}

