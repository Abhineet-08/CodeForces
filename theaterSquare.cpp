#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n,m,a;
	cin >> m >> n >> a;
	
	// calculating the number of flagstones required for each side
	// for length
	long long num_length = ceil((double)n/a);
	// for breadth
	long long num_breadth = ceil((double)m/a);

	long long total = num_length * num_breadth;
	cout << total << endl;


	return 0;
}