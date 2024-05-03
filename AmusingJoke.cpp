#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;

    if( (s1.length()+s2.length()) != s3.length() ){
    	cout << "NO" << endl;
    	return 0;
    }

    map<char,int> mp;
    map<char,int> mpp;

    for(auto c:s1) {
    	mp[c]++;
    }
    for(auto c:s2) {
    	mp[c]++;
    }
    for(auto c:s3) {
    	mpp[c]++;
    }


    // if(mp==mpp) cout << "YES" << endl;
    // else cout << "NO" << endl;

    for(auto pair: mp){
    	char letter = pair.first;
    	int count = pair.second;
    	if(mpp[letter] != count){
    		cout << "NO" << endl;
    		return 0;
    	}
    }
    cout << "YES" << endl;

    return 0;
}