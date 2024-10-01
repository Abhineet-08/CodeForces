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
        int n;
        cin >> n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        if(n==1){
            cout << "Yes" << endl;
            break;
        }
        int  d = n;
        sort (arr.rbegin(),arr.rend());
        int i=0;
        while(i<n){
            int c = 0;
            while(arr[i]==arr[i+1]){
                i++;
                c++;
            }
            d-=c;
            if(arr[i]<arr[i+1] && arr[i+1]-arr[i]<=1){
                d--;
                i++;
            }
        }

        if (d == 1){
            cout << "Yes" << endl;
            break;
        }else {
            cout << "No" << endl;
            break;
        }
        

    }
    return 0;
}