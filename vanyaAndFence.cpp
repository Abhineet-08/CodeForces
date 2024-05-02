#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, h;
	cin >> n >> h;
	int arr[n];
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] <= h) {
			ans += 1;
		}
		else {
			ans += 2;
		}
	}
	cout << ans << endl;
	return 0;
}