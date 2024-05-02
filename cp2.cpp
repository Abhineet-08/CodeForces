#include<bits/stdc++.h>
using namespace std;

void sub(int ind, vector<int>&ds, int val, int sum, int arr[], int n) {
	if (ind == n) {
		if (val == sum) {
			for (auto it : ds) {
				cout << it << " ";
			}
			cout << endl;
		}
		return;
	}

	ds.push_back(arr[ind]);
	val += arr[ind];
	sub(ind + 1, ds, val, sum, arr, n);

	val -= arr[ind];
	ds.pop_back();
	sub(ind + 1, ds, val, sum, arr, n);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sum;
	cin >> sum;
	int val = 0;
	vector<int>ds;

	sub(0, ds, 0, sum, arr, n);

	return 0;
}