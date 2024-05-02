#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate total deliciousness for one test case
int calculateTotalDeliciousness(int N, int K, int L, vector<int>& A) {
    // Sort the deliciousness values in decreasing order
    sort(A.begin(), A.end(), greater<int>());

    int totalDeliciousness = 0;
    for (int i = 0; i < K; ++i) {
        // Buy the pastry with the highest deliciousness
        totalDeliciousness += A[0];
        A.erase(A.begin());
        // Move to the back of the queue
        L += 1;
    }

    return totalDeliciousness;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N, K, L;
        cin >> N >> K >> L;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int result = calculateTotalDeliciousness(N, K, L, A);
        cout << result << endl;
    }

    return 0;
}
