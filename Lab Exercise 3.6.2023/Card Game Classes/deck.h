//Deck class definition file
//deck.h
//Author: nmessa

#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <vector>
using namespace std;

// this class respresents a deck of cards
// When a Deck is constructed, it contains 52 cards
// in a "regular" order (aces, twos, threes, ... , kings)
//
// Shuffling a deck makes it consist of 52 cards in a random order
//
// GetCard() returns a card from the deck and decreases the
// number of cards in the deck (returned by Size())
// The idea is that after shuffling, calling GetCard() 52 times
// returns each card in the deck after shuffling.
//
// Calling Shuffle again replenishes the deck with 52 cards.



class Deck
{
  private:

    vector<Card> myCards;
    int myIndex;  // current card to deal

  public:

    Deck();           // pristine, sorted deck

    void shuffle();   // shuffle the deck, all 52 cards present
    Card getCard();   // get a card, after 52 a joker is returned

    int  size() const; // # cards left in the deck
};

#endif
