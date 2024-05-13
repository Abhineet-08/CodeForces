#include <iostream>
#include <string>
using namespace std;

// Function to check if a ticket is lucky
string is_lucky(string ticket) {
    // Calculate the sum of the first three digits
    int first_half_sum = 0;
    for (int i = 0; i < 3; ++i) {
        first_half_sum += ticket[i] - '0';
    }
    // Calculate the sum of the last three digits
    int second_half_sum = 0;
    for (int i = 3; i < 6; ++i) {
        second_half_sum += ticket[i] - '0';
    }
    // Check if the sums are equal
    if (first_half_sum == second_half_sum) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    // Number of test cases
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif    
    int t;
    cin >> t;

    // Iterate over each test case
    for (int i = 0; i < t; ++i) {
        // Read the ticket number
        string ticket;
        cin >> ticket;
        // Check if the ticket is lucky and print the result
        cout << is_lucky(ticket) << endl;
    }

    return 0;
}
