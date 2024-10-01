#include <iostream>
#include <vector>

using namespace std;

int count_amazing_performances(int n, vector<int>& points) {
    int amazing_count = 0;
    if (n == 1)
        return 0;
    if(n == 2)
    {
    	if(points[0]!=points[1])
    		return 1;
    	else 
    		return 0;
    }

    int best_score = points[0];
    int worst_score = points[0];

    for (int i = 1; i < n; ++i) {
        if (points[i] > best_score) {
            amazing_count++;
            best_score = points[i];
        } else if (points[i] < worst_score) {
            amazing_count++;
            worst_score = points[i];
        }
    }

    return amazing_count;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i];
    }
    cout << count_amazing_performances(n, points) << endl;
    return 0;
}
