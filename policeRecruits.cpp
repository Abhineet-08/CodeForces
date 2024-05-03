#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int officer_Recriuted = 0;
    int count = 0;
    for(int i=0;i<n;i++){
    	int cases;
    	cin >> cases;

    	if(cases == -1){
    		if(officer_Recriuted == 0){
    			count++;
    		}else {
    			officer_Recriuted--;
    		}
    	}else {
    		officer_Recriuted+=cases;
    	}
    }
    cout << count << endl;
    return 0;
}