#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	string s;
	cin >> s;
	int win_a = 0, win_d = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			win_a++;
		}
		else {
			win_d++;
		}
	}
	if (win_a > win_d) {
		cout << "Anton" << endl;
	}
	else if (win_a < win_d) {
		cout << "Danik" << endl;
	}
	else {
		cout << "Friendship" << endl;
	}
	return 0;
}