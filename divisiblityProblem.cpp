#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		int z = a % b;
		if (z == 0) {
			cout << "0" << endl;
		}
		else
			cout << b - z << endl;
	}
	return 0;
}