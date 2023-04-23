#ifndef _SIMULATION_H
#define _SIMULATION_H

/**
  * Simulation controls a simulation of fish as
  * represented in an Environment.
  *
  * One step of a simulation can be performed via Step(..),
  * an arbitrary number of steps via Run(..).
  *
  */


// class declarations for those classes only used
// as references (passed by reference/const reference)

class Environment;


class Simulation
{
  public:
    Simulation();
      // postcondition: simulation is ready to run

    void Step(Environment & env);
      // postcondition: one step of simulation in env has been made

    void Run(Environment & env, int steps);
      // postcondition: simulation on env run for # steps passed as steps

};

#endif

