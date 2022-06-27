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
int Player::getWallet()
{
    return wallet;
}