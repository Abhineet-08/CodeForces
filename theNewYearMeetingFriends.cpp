#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    // Sort the points
    int points[] = {x1, x2, x3};
    sort(points, points + 3);

    // Median is the second point after sorting
    int median = points[1];

    // Calculate the total distance
    int total_distance = abs(points[0] - median) + abs(points[1] - median) + abs(points[2] - median);

    cout << total_distance << endl;



	return 0;
}