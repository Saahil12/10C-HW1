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

// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main()
{
    bool more = true;
    while (more)
    {
        int bet;
        cout << "You have $" << p1.get_money() << ". Enter bet: ";
        cin >> bet;
        if (bet > p1.get_money())
        {
            cout << "Not Possible! Enter bet: ";
            cin >> bet;
        }
        cout << "Your cards:" << endl;
        player.return_first_card();
        
        
        
        
        
        
        
        
        
        if (money <=0)
        {
            more = false;
        }
    }
    
    return 0;
}
