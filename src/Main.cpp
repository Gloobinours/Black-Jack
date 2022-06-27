#include <iostream>
#include <vector>
using namespace std;

#include "Card.hpp"

/* 
    Makes a card given a suit and a value.
    @param string suit
    @param int value
    @return an object Card
*/
Card makeCard(string suit, int value)
{
    Card card("", suit, value);

    if (value < 11 && value >= 2)
    {
        card.setName(to_string(value), suit);
    }
    else if (value == 11)
    {
        card.setName("Jack", suit);
    }
    else if (value == 12)
    {
        card.setName("Queen", suit);
    }
    else if (value == 13)
    {
        card.setName("King", suit);
    }
    else if (value == 14)
    {
        card.setName("Ace", suit);
    }
    else
    {
        throw runtime_error("Wrong card value");
    }
    
    return card;
}

vector<Card> makeDeck()
{
    vector<Card> deck;

    for (int i = 2; i <= 14; i++)
    {
        deck.push_back(makeCard("Clubs", i));
        deck.push_back(makeCard("Spades", i));
        deck.push_back(makeCard("Diamonds", i));
        deck.push_back(makeCard("Hearts", i));
    }

    return deck;
}

int main(int argc, char const *argv[])
{
    vector<Card> deck = makeDeck();
    for (int i = 0; i < deck.size(); i++)
    {
        cout << deck[i] << endl;
    }
    return 0;
}
