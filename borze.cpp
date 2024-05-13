#include <iostream>
#include <string>

using namespace std;

string decodeBorze(string borzeCode) {
    string decodedNumber = "";
    int i = 0;
    while (i < borzeCode.length()) {
        if (borzeCode[i] == '.') {
            decodedNumber += "0";
            i++;
        } else if (borzeCode[i] == '-' && borzeCode[i + 1] == '.') {
            decodedNumber += "1";
            i += 2;
        } else if (borzeCode[i] == '-' && borzeCode[i + 1] == '-') {
            decodedNumber += "2";
            i += 2;
        }
    }
    return decodedNumber;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif    
    string borzeCode;
    cin >> borzeCode;
    cout << decodeBorze(borzeCode) << endl;
    return 0;
}
