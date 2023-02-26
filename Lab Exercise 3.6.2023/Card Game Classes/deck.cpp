//Deck class implemention file
//deck.cpp
//Author: nmessa


#include "deck.h"
#include "randgen.h"   //For random number generation
const int SIZE = 52;

Deck::Deck()
    : myCards(SIZE),
      myIndex(0)		//initializer list
{
    int rank;
    int suit;
    int num = 0;
    
    for(rank=1; rank <= SIZE/4; rank++)
    {
		for (suit = Card::spades; suit <= Card::clubs; suit++)
		{
			myCards[num] = Card(rank,Card::Suit(suit));
			num++;
		}
    }
}

void Deck::shuffle()
{
    myIndex = 0;
    RandGen gen;
    
    int k;
    for(k=0; k < SIZE-1; k++)
    {
		int swapIndex = gen.randInt(k,SIZE-1);
		Card temp = myCards[swapIndex];
		myCards[swapIndex] = myCards[k];
		myCards[k] = temp;
    }
}

Card Deck::getCard()
{
    Card c;
    
    if (0 <= myIndex && myIndex < SIZE)
    {
		c = myCards[myIndex];
		myIndex++;
    }
    else
    {
		c = Card(0,Card::spades); // make a joker
    }
    return c;
}

int Deck::size() const
{
    return SIZE - myIndex;
}
