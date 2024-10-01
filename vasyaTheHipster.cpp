#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a,b;
	cin >> a >> b;

	if(a==b){
		cout << a << " " << "0" << endl;
		return 0;
	}

	int maxi = max(a,b);
	int rem = abs(a-b);

	if(rem>=2){
		cout << maxi-rem << " " << rem/2 << endl;
	}else{
		cout << maxi-rem << " " << "0" << endl;
	}
	return 0;
}