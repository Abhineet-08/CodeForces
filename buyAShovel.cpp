#include <iostream>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif  
    int k, r;
    cin >> k >> r;

    int shovels = 1;
    while (true) {
        if ((shovels * k) % 10 == 0 || (shovels * k - r) % 10 == 0) {
            break;
        }
        shovels++;
    }

    cout << shovels << endl;

    return 0;
}
