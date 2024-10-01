#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string arr;
    getline(cin, arr);  // Use getline to read the entire input line including spaces.
    unordered_set<char> st;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == '{' || arr[i] == '}' || arr[i] == ',' || arr[i] == ' ') {
            continue; // Skip these characters
        } else {
            st.insert(arr[i]);  // Use insert to add elements to the set
        }
    }
    cout << st.size() << endl;

    return 0;
}
