#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	int n = s[0] - '0';
	char ch = s[0];
	if (isupper(ch)) {
		cout << s << endl;
	}
	else {
		s[0] = toupper(ch);
		cout << s << endl;
	}
	return 0;

}