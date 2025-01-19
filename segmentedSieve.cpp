#include <iostream>
#include <cmath>
#include <vector>
// #include <conio.h>
#include <algorithm>
using namespace std;

// Function to generate all primes up to sqrt(R)
vector<int> generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    return primes;
}

// Segmented Sieve to find primes in range [L, R]
void segmentedSieve(long long int L, long long int R) {
    int limit = sqrt(R);
    vector<int> primes = generatePrimes(limit);

    vector<bool> isPrime(R - L + 1, true);

    // Mark multiples of each prime in the range [L, R]
    for (int prime : primes) {
        // Find the first multiple of prime in the range [L, R]
        long long int start = max(prime * prime, (L + prime - 1) / prime * prime);

        // Mark all multiples of prime as non-prime
        for (long long int j = start; j <= R; j += prime) {
            isPrime[j - L] = false;
        }
    }

    // Print all primes in the range [L, R]
    for (long long int i = L; i <= R; i++) {
        if (isPrime[i - L] && i > 1) { // Exclude 1 as it is not a prime
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    long long int L = 10, R = 50; // Example range
    segmentedSieve(L, R);
    return 0;
}
