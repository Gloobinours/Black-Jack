#include <iostream>

using namespace std;

#include "Player.hpp"
#include "Deck.hpp"

Player::Player(string n, int w)
{
    this -> name = n;
    this -> wallet = w;
}
string Player::getName()
{
    return name;
}
void Player::addHand(Card c)
{
    hand.push_back(c);
}
int Player::getWallet()
{
    return wallet;
}