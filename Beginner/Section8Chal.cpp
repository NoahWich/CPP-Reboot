#include <iostream>

using namespace std;

int main() {

    int amtCents;                           // Taking in the initial amount of money 
    cout << "Enter an amount in Cents: ";
    cin >> amtCents;

    int dolars {}, quarters {}, dimes {}, nickels {}, pennies {};       // Init all of the other variables

    dolars = amtCents / 100;
    amtCents -= dolars * 100;

    quarters = amtCents / 25;
    amtCents -= quarters * 25;

    dimes = amtCents / 10;
    amtCents -= dimes * 10;

    nickels = amtCents / 5;
    amtCents -= nickels * 5;

    pennies = amtCents / 1;
    amtCents -= pennies;

    cout << "You can provide the change as follows: " << endl;
    cout << "Dollars: " << dolars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}