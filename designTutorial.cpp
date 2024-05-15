#include <iostream>
#include <vector>

using namespace std;

// Function to check if a number is composite
bool isComposite(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return true;
    }
    return false;
}

// Function to find two composite numbers summing up to n
pair<int, int> findCompositeSum(int n) {
    for (int i = 4; i <= n - 4; ++i) {
        if (isComposite(i) && isComposite(n - i)) {
            return make_pair(i, n - i);
        }
    }
    // If no solution is found, return a default pair
    return make_pair(-1, -1);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    // Find the composite sum
    pair<int, int> result = findCompositeSum(n);

    // Output the result
    cout << result.first << " " << result.second << endl;

    return 0;
}
