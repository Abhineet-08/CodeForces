#include <iostream>
#include <vector>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;

    vector<int> percentages(n);
    for (int i = 0; i < n; i++) {
        cin >> percentages[i];
    }

    // Calculate the total volume of orange juice
    int totalVolume = 0;
    for (int i = 0; i < n; i++) {
        totalVolume += percentages[i];
    }

    // Calculate the volume fraction of orange juice in the cocktail
    double cocktailFraction = static_cast<double>(totalVolume) / n;

    // Output the result
    cout << fixed;
    cout.precision(9);
    cout << cocktailFraction << endl;

    return 0;
}
