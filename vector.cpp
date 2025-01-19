#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(5,1);

    // Input elements using push_back
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;    // Take input
        v.push_back(x); // Dynamically add to the vector
    }

    // Output elements
    for (int i = 0; i < 10; i++) {
        cout << v[i] << " "; // Access elements
    }

    return 0;
}
