
#include <iostream>
#include <string>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;

	string hello = "hello";
	int j = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == hello[j]) {
			j++;
		}
		if (j == 5) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}
