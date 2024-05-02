#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int sum = 0, ans = 0;
	while (n--) {
		int a, b;
		cin >> a >> b;
		sum = sum - a + b;
		ans = max(sum, ans);
	}
	cout << ans << endl;
	return 0;
}