#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// int x1,x2,x3,x4;
	// cin >> x1 >> x2 >> x3 >> x4 ;

	vector<int> arr(4);
	for(int i=0;i<4;i++){
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	int a,b,c;
	
	c = arr[3] - arr[0];
	a = arr[2]-c;
	b = arr[1]-c;



	cout << a << " " << b << " " << c << endl;
	return 0;

}