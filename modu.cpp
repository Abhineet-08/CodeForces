#include <iostream>
using namespace std;

// Function to calculate modular exponentiation (a^b % M)
long long mod_pow(long long base, long long exponent, long long mod) {
    long long result = 1;
    base %= mod;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }

    return result;
}

// Function to calculate the modular inverse of a modulo m using extended Euclidean algorithm
long long mod_inverse(long long a, long long m) {
    long long m0 = m;
    long long x0 = 0, x1 = 1;

    while (a > 1) {
        long long q = a / m;
        long long t = m;

        m = a % m;
        a = t;

        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    return (x1 < 0) ? (x1 + m0) : x1;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T;
    cin >> T;

    while (T--) {
        long long N, K, M;
        cin >> N >> K >> M;

        // Calculate the minimum number of flowers Chef should pluck
        long long min_flowers = mod_pow(K, N - 1, M);

        // Calculate the modular inverse of K modulo M
        long long inverse_K = mod_inverse(K, M);

        // Calculate the number of flowers Chef should offer at each temple
        long long offer_flowers = inverse_K % M;

        cout << min_flowers << " " << offer_flowers << endl;
    }

    return 0;
}
