// where int main() will be
#include <iostream>
#include <fstream> //for gamelog.txt file
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"

using namespace std;

// Global constants (if any)
int money = 100;
Player p1(100);
Hand player;
Hand dealer;
int bet;
char c;

// Non member functions declarations (if any)

// Non member functions implementations (if any)


// Stub for main
int main()
{
    //Player's hand
    cout << "You have $" << p1.get_money() << ". Enter bet: ";
    cin >> bet;
    if (bet > p1.get_money())
    {
        cout << "Not Possible! Enter bet: ";
        cin >> bet;
    }
    
    bool more = true;
    cout << "Your cards:" << endl;
    player.return_first_card();
    
    while (more)
    {
        cout << "Your total is " << player.return_total() << ". Do you want another card (y/n)? ";
        cin >> c;
        if ( c != 'y')
            {more = false;}
        else
        {   cout << "New card:" << endl;
            player.new_card();
            cout << "\n";
            cout << "Your cards:" << endl;
            player.return_cards();
        }
    }
    
    //Dealer's hand
    bool more2 = true;
    cout << "Dealer's cards: ";
    dealer.return_first_card();
    
    while (more2)
    {
        cout << "The dealer's total is " << dealer.return_total() << "." << endl;
        cout << "\n";
        if ( dealer.return_total() > 5.5)
            {more2 = false;}
        else
        {
            cout << "New card:" << endl;
            dealer.new_card();
            cout << "\n";
            cout << "Dealer's card:" << endl;
            dealer.return_cards();
        }
    }
    
    if (player.return_total() < dealer.return_total() && player.return_total() <= 7.5)
    {
        cout << "You win " << bet << "." << endl;
        cout << "\n";
    }
    else if (player.return_total() == dealer.return_total() && player.return_total() <= 7.5)
    {
        cout << "Nobody wins!" << endl;
        cout << "\n";
    }
    else
    {
        cout << "Too bad. You lose " << bet << "." << endl;
        cout << "\n";
    }
    
    return 0;
}
