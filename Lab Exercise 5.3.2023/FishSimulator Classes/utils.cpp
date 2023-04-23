#include "utils.h"
#include "position.h"

apstring IntToString(int n)
// postcondition: returns stringized form of n    
{
  if (n == 0) 
  {
    return "0";   // special case for 0
  }

  int k;    
  apstring reverse = "";    // will be correct, but in reverse
  apstring val = "";        // the string returned

  if (n < 0)                // start with "-" if n < 0
  {
    val = "-";
    n = -n;
  }
  while (n > 0)             // get each digit, catenate in reverse
  {
    reverse += char('0' + n % 10);
    n /= 10;
  }

  // now build the string to return by "unreversing"

  for (k = reverse.length() - 1; k >= 0; k--)
  {
    val += reverse[k];
  }
  return val;
}

void Sort(apvector<Fish> & list, int numElts)
// precondition:  list contains numElts Fish
// postcondition: list sorted so that entries are
//                in order top-down/left-right by Position   
{
  // use selection sort

  int j, k, minIndex;
  Position min;
  Position current;
  Fish temp;

  for (j = 0; j < numElts; j++)
  {
    minIndex = j;
    min = list[j].Location();

    for (k = j + 1; k < numElts; k++)
    { 
      current = list[k].Location();
      if (current.Row() < min.Row() ||
          (min.Row() == current.Row() && current.Col() < min.Col()))
      {
        min = current;
        minIndex = k;
      }
    }

    temp = list[minIndex];
    list[minIndex] = list[j];
    list[j] = temp;
  }
}

// Indicates level of detail at which we want debugging information.
// 0 => no debugging information displayed
// 1 => fish moves only
// 3 => neighborhood contents + output for 1
// 5 => neighborhood element selection + positions added and not added
//        to the neighborhood + myFish vector + output for 3

int LEVEL_OF_DEBUG_DETAIL = 0;

// The given msg is to be printed if level (which is positive) is less than 
// or equal to LEVEL_OF_BUG_DETAIL, the level of detail at which we want to
// see debugging info.  Indent the printed msg 2 spaces for each level of
// detail.
void DebugPrint(int level, const apstring & msg) 
{
  int k;

  if (level <= LEVEL_OF_DEBUG_DETAIL) 
  {
    for (k = 0; k < level; k++) 
    {
      cout << ' ';
    }
    cout << "**** " << msg << endl;
  }
}






