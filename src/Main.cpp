#include <iostream>
#include <vector>
using namespace std;

#include "Card.hpp"
#include "Deck.hpp"
#include "Player.hpp"

/**
 * Transform a string to uppercase letters
 * @param string s, a string
 * @return an all uppercase string
 */
string toUpper(string s)
{
    int i = 0;
    while(s[i])
    {
        if(islower(s[i]))
            s[i] -= 32;
        i++;
    }
    return s;
}
/**
 * Verify if the string has only numbers
 * @param string s, a string
 * @return true if all characters are numbers
 */
bool isNumber(string s)
{
    for (int i = 0; i < s.size() -1; i++)
    {
        if (isdigit(s[i]) == false)
        {
            return false;
        }
        
    }
    return true;
}

int main(int argc, char const *argv[])
{
    // Create player1
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    Player player1(name, 500);
    
    string prompt;
    string move;

    string stringbet;
    int bet;

    // Game start
    while (toUpper(prompt) != "STOP")
    {
        Deck deck;
        deck.shuffle();

        cout << "How much money would you like to bet?" << endl << player1.getWallet() << endl;
        cin >> stringbet;
        if (isdigit(stringbet[0]) == true)
        {
            
        }
        
        while (true)
        {
            player1.addHand(deck.deal());

            // Player move
            cout << player1 << "Would you like to hit";
            if(player1.getHand().size() > 1)
                cout << ", double,";
            cout << " or stand?" << endl;
            cin >> move;

            move = toUpper(move);
            if(move == "HIT")
            {
                
            }
        }

        // Ask to restart
        cout << "Would you like to play again? Type 'stop' to exit." << endl;
        cin >> prompt;
    }
    

    return 0;
}
