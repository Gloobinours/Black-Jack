#ifndef CARD_H_
#define CARD_H_

using namespace std;

class Card
{
    string name;
    string suit;
    int value;

public:
    Card();
    Card(string s, int v);
    string getName();
    string getSuit();
    int getValue();
    void setName(string n, string s);
    Card makeCard(string suit, int value);
};

ostream& operator<<(ostream& os, Card& c);

#endif