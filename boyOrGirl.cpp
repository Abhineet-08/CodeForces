#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	vector<char>vec;
	for (int i = 0; i < s.length(); i++) {
		char item = s[i];
		if (!(find(vec.begin(), vec.end(), item) != vec.end()) ) {
			vec.push_back(item);
		}
	}
	int n = vec.size();
	if (n % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	}
	else {
		cout << "IGNORE HIM!" << endl;
	}
}