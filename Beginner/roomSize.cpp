#include <iostream>

using namespace std;

// This Program will calculate the area of a room in Sq. ft.

int main() {

    int roomWidth;
    int roomLength;

    cout << "Enter the width of the room [ft]: ";
    cin >> roomWidth;

    cout << "Enter the length of the room [ft]: ";
    cin >> roomLength;

    cout << "\nThe room Area is: " << roomLength * roomWidth << " square feet.\n";

    return 0;
}
