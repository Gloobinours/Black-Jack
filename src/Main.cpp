#include <iostream>
#include <vector>
using namespace std;

#include "Card.hpp"
#include "Deck.hpp"
#include "Player.hpp"

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
int main(int argc, char const *argv[])
{
    //Create player1
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    Player player1(name, 500);

    string prompt;
    cin >> prompt;
    while (prompt.toupper() != "STOP")
    {
        /* code */
    }
    

    return 0;
}
