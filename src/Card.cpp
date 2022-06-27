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
    
    //Create name
    if (value < 11 && value >= 2)
    {
        this -> setName(to_string(value), suit);
    }
    else if (value == 11)
    {
        this -> setName("Jack", suit);
    }
    else if (value == 12)
    {
        this -> setName("Queen", suit);
    }
    else if (value == 13)
    {
        this -> setName("King", suit);
    }
    else if (value == 14)
    {
        this -> setName("Ace", suit);
    }
    else
    {
        throw runtime_error("Wrong card value");
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