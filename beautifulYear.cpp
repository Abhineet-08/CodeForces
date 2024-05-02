#include <iostream>
#include <string>
#include <unordered_set>

bool hasDistinctDigits(int year) {
    std::string yearStr = std::to_string(year);
    std::unordered_set<char> uniqueDigits;

    for (char digit : yearStr) {
        if (uniqueDigits.count(digit) > 0) {
            return false; // Duplicate digit found
        }
        uniqueDigits.insert(digit);
    }

    return true; // All digits are distinct
}

int findNextDistinctYear(int y) {
    while (true) {
        y++;
        if (hasDistinctDigits(y)) {
            return y;
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int y;
    std::cin >> y;

    int nextDistinctYear = findNextDistinctYear(y);
    std::cout << nextDistinctYear << std::endl;

    return 0;
}
