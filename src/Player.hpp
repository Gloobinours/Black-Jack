#ifndef PLAYER_H_
#define PLAYER_H_

using namespace std;

#include <iostream>
#include <vector>

#include "Deck.hpp"
#include "Card.hpp"

class Player
{
    string name;
    vector<Card> hand;
    int wallet;

public:
    /**
     * Default constructor
     * @param string n, Player's name
     * @param int w, money for the Player's wallet
     */
    Player(string n, int w);

    /**
     * @return Player's name
     */
    string getName();

    /**
     * @return Player's wallet
     */
    int getWallet();

    /**
     * @return Player's hand
     */
    vector<Card> getHand();

    /**
     * Add card to Player's hand
     * @param Card c, card to add to the hand
     */
    void addHand(Card c);
};

/**
 * Prints the class
 */
ostream& operator<<(ostream& os, Player& p);

#endif