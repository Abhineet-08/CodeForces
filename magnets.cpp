#include <iostream>
#include <string>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    string prev, current;
    int groups = 0;

    for (int i = 0; i < n; i++) {
        cin >> current;
        if (i == 0 || current != prev) {
            groups++;
        }
        prev = current;
    }

    cout << groups << endl;
    return 0;
}
