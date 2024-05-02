#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int n;
	cin >> n;
	long long int rem = n % 5;
	if (rem == 0) {
		cout << n / 5 << endl;
	}
	else {
		cout << (n / 5) + 1;
	}
	return 0;
}