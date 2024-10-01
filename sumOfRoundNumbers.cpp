#include <iostream>
#include <vector>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Number to represent as sum of round numbers
        cin >> n;

        vector<int> round_numbers; // Vector to store the round numbers

        int position = 1; // Initialize position for the rightmost digit

        while (n > 0) {
            int digit = n % 10; // Extract the rightmost digit
            if (digit != 0) {
                round_numbers.push_back(digit * position); // Add round number to the vector
            }
            n /= 10; // Move to the next digit towards left
            position *= 10; // Update the position
        }

        cout << round_numbers.size() << endl; // Number of summands
        for (int i = 0; i < round_numbers.size(); ++i) {
            cout << round_numbers[i] << " "; // Print the round numbers
        }
        cout << endl;
    }

    return 0;
}
