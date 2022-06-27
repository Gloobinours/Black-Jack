#include <iostream>
using namespace std;

#include "Card.hpp"


Card::Card()
{
    this -> setName("placeholder", "placeholder");
    this -> suit = "placeholder";
    this -> value = 0;
}
Card::Card(string s, int v = 0) : suit(s), value(v)
{
    if (s == "" || v == NULL || v > 14)
    {
        throw runtime_error("Incorrect card declaration");
    }
}
string Card::getName()
{
    return this -> name;
}
string Card::getSuit()
{
    return this -> suit;
}
int Card::getValue()
{
    return this -> value;
}
void Card::setName(string n, string s)
{
    this -> name = n + " of " + s;
}
ostream& operator<<(ostream& os, Card& c)
{
    os << "[" << c.getName() << "]";
    return os;
}