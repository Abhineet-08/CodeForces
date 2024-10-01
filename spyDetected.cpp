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
		int ans,val;
		int n;
		cin >> n;
		vector<int>vec(n);
		for(int i=0;i<n;i++){
			cin >> vec[i];
		}
		map<int,int>mp;
		for(int i=0;i<n;i++){
			mp[vec[i]]++;
		}
		for(auto it:mp){
			if(it.second==1){
				ans = it.first;
			}
		}
		for(int i=0;i<n;i++){
			if(vec[i]==ans){
				val = i;
			}
		}
		cout << val+1 << endl;
	}
	return 0;
}