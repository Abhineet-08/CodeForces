#include <iostream>
#include <vector>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;

    vector<int> participation(n);
    for (int i = 0; i < n; ++i) {
        cin >> participation[i];
    }

    int eligible_students = 0;
    int eligible_teams = 0;

    for (int i = 0; i < n; ++i) {
        if (participation[i] < 5) {
            ++eligible_students;
            if (participation[i] + k <= 5) {
                ++eligible_teams;
            }
        }
    }

    int max_teams = eligible_teams / 3;
    cout << max_teams << endl;

    return 0;
}
