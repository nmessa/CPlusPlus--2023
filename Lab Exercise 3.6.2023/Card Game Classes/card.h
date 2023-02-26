//Card class definition file
//card.h
//Author: nmessa

#ifndef CARD_H
#define CARD_H

// This class represents a playing card, i.e., "ace of spades"
// a Card is constructed from a rank (int in range 1..12)
// and a suit (Card::spades, Card::hearts, Card::diamonds,
// Card::clubs)
//
// Cards should be created by a Deck (see deck.h), a Deck returns
// good cards, but conceivably (if called improperly) might return
// the "zero of doughnuts" which should be thought of as a joker
//
// Jokers are different from every card, including other jokers
//
// The function toString() converts a card to a string, e.g., to print
//
// Accessor functions include
//
// int GetRank()      -- returns 1, 2, ..., 13 for ace, two, ..., king
//
// bool SameSuitAs(c) -- returns true if same suit as Card c
//
// string suitString() -- returns "spades", "hearts", "diamonds" or "clubs"
//
// bool IsJoker() -- returns true if card is a joker, the zero of doughnuts

#include <iostream>
#include <string>
using namespace std;

class Card
{
  public:
	enum Suit {spades, hearts, diamonds, clubs};

  private:

    string rankString(int r)       const;  // return "ace", "two", ...
	
    int myRank;
    Suit mySuit;

  public:
    //enum Suit {spades, hearts, diamonds, clubs};
    
    Card();          // default, ace of spades

    Card(int rank, Suit s);

    string toString()              const;  // return string version
    bool sameSuitAs(const Card& c) const;  // true if suit same as c
    int  getRank()                 const;  // return rank, 1..13
    string suitString(Suit s)      const;  // return "spades", "hearts",...
    bool isJoker()                 const;  // true if card is valid
};

//Operator overloads
ostream& operator << (ostream& out, const Card& c);
bool operator == (const Card& lhs, const Card& rhs);
    
#endif
