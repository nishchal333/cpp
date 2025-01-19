#include <iostream>
#include <set>
using namespace std;

int main() {
    // Declare a set of integers
    set<int> mySet;

    // Get user input
    int userInput;
    cout << "Enter a value: ";
    cin >> userInput;

    // Insert the input into the set
    mySet.insert(userInput);

    // Print the set
    cout << "Set contains: ";
    for (int elem : mySet) {
        cout << elem << " ";
    }

    return 0;
}