#include <iostream>
using namespace std;

int main() {
    int row;
    cin >> row;

    // Allocate memory for a jagged array
    int** arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[i + 1];  // Each row has i+1 columns
    }

    // Input values
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {  // Only input up to i+1 elements for each row
            cin >> arr[i][j];
        }
    }

    // Output values
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {  // Only output up to i+1 elements for each row
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
