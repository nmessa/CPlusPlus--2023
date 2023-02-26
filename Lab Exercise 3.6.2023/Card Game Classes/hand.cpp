//Hand class implmentation file
//hand.cpp
//Author: nmessa

#include "hand.h"

const int SIZE = 5;

Hand::Hand()
   //: myCards(SIZE)  //initializer list to call vector constructor
{
}

void Hand::dealFrom(Deck& d)
{
    int k;
    for(k=0; k < SIZE; k++)
    {
		myCards[k] = d.getCard();
    }
}

void Hand::addCard(Card& c)
{
	myCards.push_back(c);
}

void Hand::print() const
{
    int k;
    for(k=0; k < SIZE; k++)
    {
	cout << myCards[k] << endl;
    }
}
