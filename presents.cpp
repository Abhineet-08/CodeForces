#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> pi(n);
    for (int i = 0; i < n; ++i) {
        cin >> pi[i];
    }
    vector<int> gifts(n);
    for (int i = 0; i < n; ++i) {
        gifts[pi[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        cout << gifts[i] << " ";
    }
    return 0;
}
