#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, digit, ans = 0, i = 0; // Initialize i to 0
    cout << "Enter a binary number: ";
    cin >> n;

    while (n != 0) {
        digit = n % 10; // Get the last digit of the binary number
        if (digit != 0 && digit != 1) {
            cout << "Invalid binary number!" << endl;
            return 1; // Exit the program if the input is not a valid binary number
        }
        ans += digit * pow(2, i); // Calculate the decimal value
        n /= 10; // Remove the last digit
        i++; // Move to the next position
    }

    cout << "Decimal equivalent: " << ans << endl;
    return 0;
}

