// where int main() will be
#include <iostream>
#include <fstream> //for txt file
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"

using namespace std;

// Global constants (if any)
int money = 100;
Player p1(100);

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
        
        
        
        
        if (money <=0)
        {
            more = false;
        }
    }
    
    return 0;
}
