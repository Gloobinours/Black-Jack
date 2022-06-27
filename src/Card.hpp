#ifndef CARD_H_
#define CARD_H_

class Card
{
    std::string name;
    std::string suit;
    int value;

public:
    Card();
    Card(std::string n, std::string s, int v);
    std::string getName();
    std::string getSuit();
    int getValue();
    void setName(std::string n, std::string s);
};

std::ostream& operator<<(std::ostream& os, Card& c);

#endif