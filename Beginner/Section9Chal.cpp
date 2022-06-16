#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    char input {};
    vector<int> list;
    int addedValue;
    double sum {0.0};
    double avg {0.0};
    int minVal {};
    int maxVal {};

    cout << "Welcome to the Menu System, Consider the Following Choices: " << endl;

    do {
        cout << "P - Print Numbers" << endl;
        cout << "A - Add a Number" << endl;
        cout << "M - Calculate the Mean of the set of Numbers" << endl;
        cout << "S - Display the Smallest Number in the Set" << endl;
        cout << "L - Display the Largest Number in the Set" << endl;
        cout << "Q - Quit the Program" << endl << endl;

        cout << "Enter your choice: ";
        cin >> input;
        cout << endl;

        switch (input) {
        case 'P':       //Print the list
            if (list.size() == 0) {
                cout << "List Contents:" << endl;
                cout << "[] - the list is empty." << endl << endl;
            } 
            else {
                cout << "List Contents:" << endl;
                cout << "[ ";
                for (int i = 0; i < list.size(); i++) {
                    cout << list.at(i) << " ";
                }
                cout << "]" << endl << endl;
            }
            break;
        case 'A':       // Add an integer to the list
            cout << "Enter in an integer to add to the list: ";
            cin >> addedValue;
            list.push_back(addedValue);
            cout << endl;
            break;
        case 'M':       // Calculate the Mean of the List
            if (list.size() == 0) {
                cout << "Unable to calculate the Mean -- List is Empty.";
            }
            else {
                for (int i = 0; i < list.size(); i++) {
                    sum += list.at(i);
                }
                avg = sum / list.size();
                cout << "The mean of the data in the list: " << avg << endl;
            }
            break;
        case 'S':       // Print the smallest value in the list
            if (list.size() == 0) {
                cout << "Unable to determine Smallest Value - List is Empty." << endl;
            }
            else {
                auto itM = min_element(list.begin(), list.end());
                minVal = *itM;
                cout << "The Smallest Value of the list is: " << minVal << endl;

            }
            break;
        case 'L':       // Print the largest value in the list
            if (list.size() == 0) {
                cout << "Unable to determine Largest Value - List is Empty." << endl;
            }
            else {
                auto itL = max_element(begin(list), end(list));
                maxVal = *itL;
                cout << "The Largest Value of the list is: " << maxVal << endl;
            }
            break;

        default:
            cout << "Input invalid, please try again" << endl;
            cout << "Enter your choice: ";
            cin >> input;
            cout << endl;
            break;
        }
        
    } while (input != 'q' && input != 'Q');

    return 0;
}