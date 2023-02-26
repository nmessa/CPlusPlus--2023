#include <iostream>
#include <vector>
using namespace std;

#include "deck.h"
#include "card.h"
#include "hand.h"

void printDeck(const Deck& d);
void printHand(const vector<Card> &);

int main()
{
    const int HAND_SIZE = 5;
    
    Deck d;
    int k;

    printDeck(d);
    cout << "\n---after shuffling---\n" << endl;

    d.shuffle();
    
    printDeck(d);
    
    vector<Card> player(HAND_SIZE);
    
	for(k=0; k < HAND_SIZE; k++)
    {
		player[k] = d.getCard();
    }

    printHand(player);
    
    return 0;
    
}

void printDeck(const Deck& d)
// post: print all cards in the Deck d
//       (cards still in d when done)
{
    Deck copy(d);  // make a copy to get cards from
    int count = d.size();
    int k;
    for(k=0; k < count; k++)
    {
	cout << copy.getCard() << endl;
    }
}

void printHand(const vector<Card> & hand)
{
   int k;
   cout << "------------" << endl;
   for (k=0; k< hand.size(); k++)
   {
      cout << hand[k] << endl;
   }
   cout << "------------" << endl;
} 
