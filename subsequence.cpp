#include<bits/stdc++.h>
using namespace std;

void subsequence (int ind, vector<int>&ds, int arr[], int n) {
	if (ind == n) {
		if (ds.size() == 0) {
			cout << "{}" << " ";
		}
		for (auto it : ds) {
			cout << it << " ";
		}
		cout << endl;
		return;
	}

	ds.push_back(arr[ind]);
	subsequence(ind + 1, ds, arr, n);
	ds.pop_back();
	subsequence(ind + 1, ds, arr, n);

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
	vector<int> ds;
	subsequence(0, ds, arr, n);
	return 0;
}