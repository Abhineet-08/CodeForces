#include <iostream>
#include <vector>

using namespace std;

pair<int, int> determine_final_score(int n, vector<int>& cards) {
    int sereja_points = 0;
    int dima_points = 0;
    int left = 0;
    int right = n - 1;

    // Loop until there are no more cards
    while (left <= right) {
        if (cards[left] > cards[right]) {
            sereja_points += cards[left];
            left++;
        } else {
            sereja_points += cards[right];
            right--;
        }

        // Dima's turn
        if (left <= right) {
            if (cards[left] > cards[right]) {
                dima_points += cards[left];
                left++;
            } else {
                dima_points += cards[right];
                right--;
            }
        }
    }

    return make_pair(sereja_points, dima_points);
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif	
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    // Determine the final score
    pair<int, int> scores = determine_final_score(n, cards);

    // Print the final score
    cout << scores.first << " " << scores.second << endl;

    return 0;
}
