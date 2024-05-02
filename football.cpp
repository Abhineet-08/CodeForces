#include <iostream>
#include <string>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string situation;
	cin >> situation;

	// Initialize variables to keep track of consecutive players of the same team
	int consecutiveZeros = 0;
	int consecutiveOnes = 0;

	// Iterate through the string to check for dangerous situations
	for (char c : situation) {
		if (c == '0') {
			consecutiveZeros++;
			consecutiveOnes = 0; // Reset consecutive ones count
		} else {
			consecutiveOnes++;
			consecutiveZeros = 0; // Reset consecutive zeros count
		}

		// If either team has 7 consecutive players, it's dangerous
		if (consecutiveZeros >= 7 || consecutiveOnes >= 7) {
			cout << "YES" << endl;
			return 0;
		}
	}

	// If no dangerous situation was found, print "NO"
	cout << "NO" << endl;
	return 0;
}
