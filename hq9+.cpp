#include <iostream>
#include <string>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string program;
    cin >> program;

    bool outputFlag = false;

    for (char ch : program) {
        if (ch == 'H' || ch == 'Q' || ch == '9') {
            outputFlag = true;
            break;
        }
    }

    if (outputFlag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
