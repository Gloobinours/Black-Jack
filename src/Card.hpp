#ifndef CARD_H_
#define CARD_H_

using namespace std;

class Card
{
    string name;
    string suit;
    int value;

public:
    /**
     * Default constructor
     * Sets the name to "placeholder, placeholder" and value to 0
     * @see value
     * @see name
     */
    Card();

    /**
     * Second construcor
     * @param string s, name of the suit
     * @param int v, value of the card
     */
    Card(string s, int v);

    /**
     * @return name of the card
     */
    string getName();

    /**
     * @return suit of the card
     */
    string getSuit();

    /**
     * @return value of the card
     */
    int getValue();

    /**
     * Sets the name of the card
     * @param string n, value for the card
     * @param string s, suit of the card
     */
    void setName(string n, string s);
};

ostream& operator<<(ostream& os, Card& c);

#endif