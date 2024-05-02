#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int lower = 0, upper = 0;
	for (int i = 0; i < s.length(); i++) {
		char ch = s[i];
		if (ch >= 'a' && ch <= 'z') {
			lower++;
		}
		else {
			upper++;
		}
	}
	if (upper > lower) {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	else {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	cout << s << endl;
	return 0;
}