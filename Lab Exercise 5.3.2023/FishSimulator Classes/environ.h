#ifndef _ENVIRONMENT_H
#define _ENVIRONMENT_H

/**
  * The Environment class models a grid of fish.
  * An environment is populated at construction time
  * with fish from a stream, presumably bound to a file.
  * The stream is expected to provide data in a certain format
  * as described below.
  *
  * The size of the environment can be determined using the
  * following accessor functions:
  *
  *   - NumRows()
  *               the # of rows in the grid
  *   - NumCols()
  *               the # of columns in the grid
  *
  * The Fish in the model/environment are accessible via a function
  * that returns a vector of all the fish.  The Environment class
  * guarantees that the fish are stored in the vector in top-down,
  * left-to-right order.  In the grid diagrammed below, fish are
  * numbered in the order they will be stored in the vector (starting
  * with the fish at index 0).
  * 
  *   +---------------------+
  *   | 0                1  |
  *   |  2      3           |
  *   |                   4 |
  *   |     5    6          |
  *   |7            8       |
  *   +---------------------+  
  *
  * Sample client code for iterating over fish and printing
  * all fish id's and coordinates in top-down/left-right order
  * appears below.
  *
  *   // construct environment
  *
  *   ifstream input("fish.dat");
  *   Environment env(input);
  *   cout << "grid has dimensions " << env.NumRows() << " x "
  *        << env.NumCols() << endl;
  *
  *   // print fish
  *
  *   apvector<Fish> fishList = env.AllFish();
  *   int k;
  *   for (k = 0; k < fishList.length(); k++)
  *     cout << fishList[k] << endl;
  *
  *
  * The format of the data in the stream (probably bound to a text file)
  * is as follows: 
  *    The first line has number of rows, number of columns. 
  *    Each subsequent line stores row/col positions of a fish.
  *    All entries are separated by white space.
  * For example,
  *
  *            rows columns
  *            row-pos col-pos
  *            row-pos col-pos
  *            ..
  *            row-pos col-pos
  *
  */

#include "fish.h"
#include "apmatrix.h"
#include <fstream>
using namespace std;

// class declarations for those classes only used
// as references (passed by reference/const reference)

class Position;

class Environment
{
  public:

    // constructor

    Environment(istream & input);
      // precondition:  input is open for reading, in correct format
      // postcondition: environment initialized and populated from input

    // accessing functions

    int NumRows() const;
      // postcondition: returns # rows in grid

    int NumCols() const;
      // postcondition: returns # columns in grid

    apvector<Fish> AllFish() const;
      // postcondition: returned vector (call it fishList) contains all fish 
      //                in top-down, left-right order:
      //                top-left fish in fishList[0], 
      //                bottom-right fish in fishList[fishList.length()-1];
      //                # fish in environment is fishList.length()

    bool IsEmpty(const Position & pos)    const;
      // postcondition: returns true if pos in grid and no fish at pos,
      //                returns false otherwise  

    // modifying functions

    void Update(const Position & oldLoc, Fish & fish);
      // precondition:  fish was located at oldLoc, has been updated
      // postcondition: if (fish.Location() != oldLoc) then oldLoc is empty;
      //                Fish fish is updated properly in this environment

    void AddFish(const Position & pos);
      // precondition:  no fish already at pos, i.e., IsEmpty(pos)
      // postcondition: fish created at pos

  private:

    bool InRange(const Position & pos) const;
      // postcondition: returns true if pos in grid,
      //                returns false otherwise  

    apmatrix<Fish> myWorld;   // grid of fish

    int myFishCreated;        // # fish ever created
    int myFishCount;          // # fish in current environment
};

#endif

