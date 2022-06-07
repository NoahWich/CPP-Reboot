#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> testScores {100, 98, 89};

    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;

    cout << "The size of the vector is: " << testScores.size();

    int scoreToAdd;
    cout << "\nEnter in your test score: ";
    cin >> scoreToAdd;
    testScores.push_back(scoreToAdd);

    cout << "There are now " << testScores.size() << " test scores in the vector";

    return 0;
}