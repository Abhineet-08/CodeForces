#include <iostream>
#include <string>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    // Initialize the variable x to 0
    int x = 0;

    // Read the number of statements
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character

    // Iterate through each statement
    for (int i = 0; i < n; ++i) {
        string statement;
        getline(cin, statement);

        // Check if the statement contains "++" or "--"
        if (statement.find("++") != string::npos) {
            x++;
        } else {
            x--;
        }
    }

    // Print the final value of x
    cout << x << endl;

    return 0;
}
