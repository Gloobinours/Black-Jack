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
vector<Card> Player::getHand()
{
    return hand;
}
ostream& operator<<(ostream& os, Player& p)
{
    for (int i = 0; i < p.getHand().size(); i++)
    {
        os << "[" << p.getHand()[i].getName() << "] ";
    }
    os << endl;
    return os;
}