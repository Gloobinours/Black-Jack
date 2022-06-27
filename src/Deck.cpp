#include <iostream>
#include <random>
#include <algorithm>
// #include <chrono>
#include <sys/time.h>
using namespace std;

#include "Deck.hpp"
#include "Card.hpp"

Deck::Deck()
{
    for (int i = 2; i <= 14; i++)
    {
        deck.push_back(Card ("Clubs", i));
        deck.push_back(Card ("Spades", i));
        deck.push_back(Card ("Diamonds", i));
        deck.push_back(Card ("Hearts", i));
    }
}
vector<Card> Deck::getDeck()
{
    return deck;
}
int Deck::getSize()
{
    return deck.size();
}
void Deck::shuffle()
{
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    auto rng = std::default_random_engine(ms);
    std::shuffle(std::begin(deck), std::end(deck), rng);
}
ostream& operator<<(ostream& os, Deck& d)
{
    for (int i = 0; i < d.getSize(); i++)
    {
        os << "[" << d.getDeck()[i].getName() << "] ";
    }
    os << endl;
    return os;
}