#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	vector<int> coins(n);
	for (int i = 0; i < n; i++) {
		cin >> coins[i];
	}

	// Sort the coins in decreasing order
	sort(coins.rbegin(), coins.rend());

	int your_sum = 0;
	int twin_sum = 0;
	int num_coins_taken = 0;

	for (int i = 0; i < n; i++) {
		your_sum += coins[i];
		twin_sum = accumulate(coins.begin() + i + 1, coins.end(), 0);
		num_coins_taken++;

		if (your_sum > twin_sum) {
			break;
		}
	}

	cout << num_coins_taken << endl;

	return 0;
}
