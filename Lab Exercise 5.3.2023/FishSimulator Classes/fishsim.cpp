//Lab Exercise 5.6.2022  - with AP classes
//Author: nmessa

#include <iostream>
#include <fstream>
#include "apstring.h"
#include "environ.h"
#include "display.h"
#include "simulate.h"
using namespace std;

int main()
{
  // replace filename below with appropriate file (full path if necessary)
  ifstream input("fish.dat");
  Environment env(input);

  // Display display(100,100);  // for graphics display
  Display display;  // for text display
  apstring s;

  Simulation sim;

  int step;
  int numSteps;

  display.Show(env);

  cout << "--- initialized --- " << endl;

  cout << "How many steps: ";
  cin >> numSteps;
  getline(cin,s);

  for (step = 0; step < numSteps-1; step++)
  {
    sim.Step(env);
    display.Show(env);
	system("CLS");
  }
  
  sim.Step(env);
  display.Show(env);
  
  cout << "Hit RETURN to terminate...";
  cin.ignore();  

  return 0;
}

