#ifndef DECK_H_
#define DECK_H_

using namespace std;

#include <vector>
#include "Card.hpp"

class Deck
{
    vector<Card> deck;

public:
    /**
     * Default constructor
     */
    Deck();

    /**
     * @return size of the deck
     */
    int getSize();

    /**
     * @return deck
     */
    vector<Card> getDeck();

    /**
     * Shuffle the deck
     */
    void shuffle();

    /**
     * Deal a card and give it to a Player
     * @return Card
     */
    Card deal();
};

/**
 * Redefine the operator << to print the class
 */
ostream& operator<<(ostream& os, Deck& d);

#endif