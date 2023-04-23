#ifndef _DISPLAY_H
#define _DISPLAY_H

/**
  * Display displays all entries in an environment
  * in a text format, e.g., using fish-supplied characters
  * for fish and space ' ' for empty-space.
  *
  * Show(..) is used to display the current state of
  * an environment.  In this text-based display, all information
  * for Show(..) is accessible via the Environment passed into Show(..).
  *
  *
  */

// class declarations for those classes only used
// as references (passed by reference/const reference

class Environment;

class Display
{
  public:

    // constructor
    Display();
      // postcondition: ready to display an Environment

    // modifying function
    void Show(const Environment & env);  // display state of env
      // postcondition: state of env written as text to cout

  private:

    // nothing here now

};

#endif


