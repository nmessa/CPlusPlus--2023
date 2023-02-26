//Hand class definition file
//hand.h
//Author: nmessa

#ifndef HAND_H
#define HAND_H

#include "deck.h"
#include <vector>
using namespace std;

class Hand
{
  private:
    vector<Card> myCards;

  public:
    Hand();

    void dealFrom(Deck& d);
	void addCard(Card& c);
    void print() const;
};

#endif
