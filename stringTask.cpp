#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	string ans;
	for (int i = 0; i < s.length(); i++) {
		char item = s[i];
		if (item != 'a' && item != 'e' && item != 'i' && item != 'o' && item != 'u' && item != 'y') {
			ans += '.';
			ans += item;
		}
	}
	cout << ans << endl;
	return 0;
}