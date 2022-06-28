#ifndef DECK_H_
#define DECK_H_

using namespace std;

#include <vector>
#include "Card.hpp"

class Deck
{
    vector<Card> deck;

public:
    Deck();
    int getSize();
    vector<Card> getDeck();
    void shuffle();
    Card deal();
};

ostream& operator<<(ostream& os, Deck& d);

#endif