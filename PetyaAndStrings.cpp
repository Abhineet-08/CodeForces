#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string a,b;
	cin >> a >> b;
	
	// transforming both the string in lower case
	transform(a.begin(),a.end(),a.begin(),:: tolower);
	transform(b.begin(),b.end(),b.begin(),:: tolower);

	// comparing

	if (a < b) {
        cout << "-1" << endl;
    } else if (a > b) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }


	return 0;

}