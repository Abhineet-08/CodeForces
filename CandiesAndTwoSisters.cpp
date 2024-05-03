#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while(t--){
    	int n ;
    	cin >> n;
    	if(n<=2) cout << "0" << endl;
    	else {
    		if(n%2!=0){
    	int half = n/2;
    	cout << half << endl;
    		}
    		else{
    			int half = n/2 - 1;
    			cout << half << endl;
    		}
		}
    }
    return 0;
}