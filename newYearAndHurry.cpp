#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int k;
	cin >> k;
	int rem = 240-k;
	int ans=0;
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=5*i;
		if(sum <= rem){
			ans++;
		}else {
			break;
		}
	}
	cout << ans << endl;
	return 0;
}