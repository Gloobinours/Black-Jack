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
    Player(string n, int w);
    string getName();
    int getWallet();
    vector<Card> getHand();
    void addHand(Card c);
};
ostream& operator<<(ostream& os, Player& p);

#endif