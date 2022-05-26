// First Program, Ask user for their Favorite Number and then print that number with a message
#include <iostream>

int main() {
    int userNum;
    std::cout << "Enter your Favorite Number [1,100]: ";

    std::cin >> userNum;
    std::cout << "Amazing, " << userNum << " is my favorite number too!\n";
    return 0;
}