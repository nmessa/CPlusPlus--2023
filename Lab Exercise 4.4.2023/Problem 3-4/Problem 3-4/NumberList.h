// Specification file for the NumberList class
//Author: nmessa
//Date: 3.10.2004
//Added prependNode and displayListBackwards functions to 
//the NumberList class

#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
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
      NumberList();      // Constructor
      ~NumberList();    // Destructor
      void appendNode(double);
      void insertNode(double);
      void deleteNode(double);
      void displayList();
      double getNode();

	  //New functions
	  void prependNode(double);
	  void displayListBackwards();
};
#endif