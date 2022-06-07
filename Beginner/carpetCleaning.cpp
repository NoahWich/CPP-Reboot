/* Noah's Carpet Cleaning Services
    $30 per Room
    Sales tax 6%
    Estimates valid for 30 days

    Prompt the user for the number of rooms,
    then provide an estimate for the services.

*/

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Noah's Carpet Cleaners!\n\n";
    cout << "How many rooms would you like cleaned?\n";

    int numRooms;
    cin >> numRooms;

    const int roomCharge {30};
    const float salesTax {0.06};

    cout << "\nEstimate for Carpet Cleaning Service:\n";
    cout << "With " << numRooms << " rooms, the cost is: $" << numRooms * roomCharge;
    cout << "\nThe Sales Tax is: $" << numRooms * roomCharge * salesTax;
    cout << "\n\nFor a grand total of: $" << (numRooms * roomCharge) + (numRooms * roomCharge * salesTax) << endl;
    cout << "This estimate is valid for 30 days.\n";
    return 0;
}