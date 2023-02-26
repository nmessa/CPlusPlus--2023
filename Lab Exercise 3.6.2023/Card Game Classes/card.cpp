//Card class implementation file
//card.cpp
//Author: nmessa

#include "card.h"

Card::Card()
{
    myRank = 1;
	mySuit = spades;
}

Card::Card(int rank, Suit s)
{
    myRank = rank;
	mySuit = s;
}

string Card::suitString(Suit s) const
{
    if (s == spades)        return "spades";
    else if (s == hearts)   return "hearts";
    else if (s == diamonds) return "diamonds";
    else                    return "clubs";
}

string Card::rankString(int r) const
// pre: 1 <= r <= 13
{
	switch (r)
	{
		case 1: return "ace";
		case 2: return "two";
		case 3: return "three";
		case 4: return "four";
		case 5: return "five";
		case 6: return "six";
		case 7: return "seven";
		case 8: return "eight";
		case 9: return "nine";
		case 10: return "ten";
		case 11: return "jack";
		case 12: return "queen";
		case 13: return "king";
		default: return "joker";
	}
}

string Card::toString() const
{
    if (1 <= myRank && myRank <= 13)
    {
	return rankString(myRank) + " of " + suitString(mySuit);
    }
    return "zero of doughnuts";
}

bool Card::sameSuitAs(const Card& c) const
// post: return true iff mySuit == c.mySuit 
{
    return mySuit == c.mySuit;
}

int Card::getRank() const
{
    return myRank;
}

bool Card::isJoker() const
{
    return myRank < 1 || 13 < myRank;
}


ostream& operator <<(ostream& out, const Card& c)
{
    out << c.toString();
    return out;
}

bool operator == (const Card& lhs, const Card& rhs)
{
    if (lhs.isJoker() || rhs.isJoker())
    {
		return false;
    }
    return lhs.getRank() == rhs.getRank() && lhs.sameSuitAs(rhs);
}
