#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int zero = 0, one = 0;
	while (n--) {
		int a;
		cin >> a;
		if (a == 0) {
			zero++;
		}
		else {
			one++;
		}
	}
	if (one == 0) {
		cout << "EASY" << endl;
	}
	else {
		cout << "HARD" << endl;
	}
	return 0;
}