// Section 7 Challenge: Arrays and Vectors

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare 2 empty vectors
    vector <int> vector1;
    vector <int> vector2;

    // Add some values to the vectors in new index, print contents of the vector
    vector1.push_back(10);
    vector2.push_back(20);

    cout << "Vector 1: " << vector1.at(0) << endl;
    cout << "Vector 2: " << vector2.at(0) << endl;

    cout << "Vector 1 contains " << vector1.size() << " element(s).\n" << endl;

    // Add some more values
    vector1.push_back(100);
    vector2.push_back(200);

    cout << "Vector 1:\n" << vector1.at(0) << endl << vector1.at(1) << endl;
    cout << "Vector 2:\n" << vector2.at(0) << endl << vector2.at(1) << endl;

    cout << "Vector 1 contains " << vector1.size() << " element(s)." << endl;

    // Initialize a 2D Vector
    vector <vector <int>> vector2D;
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    // Display the elements of Vector2D
    cout << "2D Vector Elements: " << endl;
    cout << vector2D.at(0).at(0) << " " << vector2D.at(0).at(1) << endl;
    cout << vector2D.at(1).at(0) << " " << vector2D.at(1).at(1) << endl;

    // Change V1.at(0) to be 1000
    vector1.at(0) = 1000;

    // Display 2D Vector Elements again
    cout << "=============================" << endl;
    cout << "2D Vector Elements: " << endl;
    cout << vector2D.at(0).at(0) << " " << vector2D.at(0).at(1) << endl;
    cout << vector2D.at(1).at(0) << " " << vector2D.at(1).at(1) << endl;

    // Display Vector 1 Elements Again
    cout << "Vector 1:\n" << vector1.at(0) << endl << vector1.at(1) << endl;


    return 0;
}