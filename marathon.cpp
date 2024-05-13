#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while(t--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		int cnt=0;
		if(a<b){
			cnt++;
		}
		if(a<c){
			cnt++;
		}
		if(a<d){
			cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}