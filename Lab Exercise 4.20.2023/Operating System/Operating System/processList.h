//Class definition file for the ProcessList class
//Author: nmessa
//Date: 4.15.2008

#ifndef PROCESSLIST_H
#define PROCESSLIST_H
#include "process.h"

class ProcessList
{
   private:
      // Declare a structure for the list
      struct ListNode
      {
         Process value;
         struct ListNode *next;
      }; 
      ListNode *head;   // List head pointer

   public:
      ProcessList();      // Constructor
      void appendNode(Process);
      void displayList();
      Process getNode();
	  void prependNode(Process);
};
#endif