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
int bet;
char c;

// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main()
{
    cout << "You have $" << p1.get_money() << ". Enter bet: ";
    cin >> bet;
    if (bet > p1.get_money())
    {
        cout << "Not Possible! Enter bet: ";
        cin >> bet;
    }
    
    bool more = true;
    while (more)
    {
        cout << "Your cards:" << endl;
        player.return_first_card();
        cout << "Your total is" << " ." << "Do you want another card (y/n)? ";
        cin >> c;
        if ( c != 'y')
            {more = false;}
        else
        {   cout << "New card:" << endl;
            player.new_card();
            cout << "Your cards:" << endl;
            player.return_cards();
        }
        
        
        
        /*
        if (money <=0)
        {
            more = false;
        }
        */
    }
    
    return 0;
}
