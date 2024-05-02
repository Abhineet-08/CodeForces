#include<bits/stdc++.h>
using namespace std;

int solve(int n, string s) {
	int count = 0;
	for (int i = 1; i < n; ++i) {
		if (s[i] == s[i - 1]) {
			count++;
		}
	}
	return count;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	string s;
	cin >> s;

	int ans = solve(n, s);
	cout << ans << endl;
	return 0;
}