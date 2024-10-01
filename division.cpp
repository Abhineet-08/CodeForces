#include <iostream>
using namespace std;

string get_division(int rating) {
    if (rating >= 1900) {
        return "Division 1";
    } else if (rating >= 1600 && rating <= 1899) {
        return "Division 2";
    } else if (rating >= 1400 && rating <= 1599) {
        return "Division 3";
    } else {
        return "Division 4";
    }
}

int main() {
    int t;
    cin >> t; // Number of testcases
    
    // Process each testcase
    for (int i = 0; i < t; ++i) {
        int rating;
        cin >> rating;
        string division = get_division(rating);
        cout << division << endl;
    }
    return 0;
}
