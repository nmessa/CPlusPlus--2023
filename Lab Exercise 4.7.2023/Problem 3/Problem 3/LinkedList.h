// Specification file for the LinkedList class
// Author: nmessa
// Date: 4.15.2007

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
   private:
      // Declare a structure for the list
      struct ListNode
      {
         double value;
         struct ListNode *next;
      }; 
      ListNode *head;   // List head pointer

   public:
      LinkedList();      // Constructor
      ~LinkedList();    // Destructor
      void appendNode(double);
      void insertNode(double);
      void deleteNode(double);
      void displayList();
      double getNode();
	  void prependNode(double);
	  void displayListBackwards();
	  void destroyList();
	  void reverseList();
	  void copyList(LinkedList&);
};
#include "LinkedList.cpp"
#endif