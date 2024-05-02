#include <iostream>
#include <string>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;

	for (int i = 0; i < t; ++i) {
		int j = 0;
		while (j < n - 1) {
			// If a boy is in front of a girl, swap them
			if (s[j] == 'B' && s[j + 1] == 'G') {
				swap(s[j], s[j + 1]);
				// Skip the next position as the girl has moved forward
				j += 2;
			} else {
				j += 1;
			}
		}
	}

	cout << s << endl;

	return 0;
}
