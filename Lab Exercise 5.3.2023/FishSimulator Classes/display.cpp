#include <iomanip>
using namespace std;
#include "display.h"
#include "environ.h"
#include "fish.h"
#include "utils.h"

// constructor

Display::Display()
// postcondition: ready to display an Environment  
{
}

// public modifying function

void Display::Show(const Environment & env)
// postcondition:  ready to display an environment
{
  const int WIDTH = 1;  // for each fish

  int rows = env.NumRows();     
  int cols = env.NumCols();
  int fishIndex = 0;
  int numFish;
  int r, c;
  Position pos;        // position of fish to be displayed next

  apvector<Fish> fishList;
  fishList = env.AllFish();
  numFish = fishList.length();

  // find position of first fish to be displayed (if any)
  if (fishIndex < numFish)
  {
    pos = fishList[fishIndex].Location();
  }

  for (r = 0; r < rows; r++)
  {
    for (c = 0; c < cols; c++)
    {
      if (pos.Row() == r && pos.Col() == c)
      {
        // this is a position with a fish
        cout << setw(WIDTH) << fishList[fishIndex].ShowMe();
        fishIndex++;

        // find position of next fish to be displayed
        if (fishIndex < numFish)
        {
          pos = fishList[fishIndex].Location();
        }
        else  // no more fish to display
        {
          pos = Position();   // not in the grid, won't be displayed
        }
      }
      else  // this position has no fish
      {
        cout << setw(WIDTH) << ' ';
      }
    }  // finished processing all columns in a row
    cout << endl;
  }  // finished processing all rows in the grid
}

