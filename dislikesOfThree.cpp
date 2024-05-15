#include <iostream>
using namespace std;

// Function to check if a number satisfies Polycarp's conditions
bool isPolycarpLiked(int num) {
    if (num % 3 == 0 || num % 10 == 3)
        return false;
    return true;
}

// Function to find the k-th element of the sequence
int findKthElement(int k) {
    int count = 0;
    int num = 1;
    while (count < k) {
        if (isPolycarpLiked(num))
            count++;
        if (count == k)
            return num;
        num++;
    }
    return -1; // Error case
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        cout << findKthElement(k) << endl;
    }

    return 0;
}
