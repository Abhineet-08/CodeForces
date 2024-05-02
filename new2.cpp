#include <iostream>
#include <vector>
#include <sstream>

std::string findMinimumNumber(const std::string& pattern) {
    int current = 1;
    std::ostringstream result;

    for (char ch : pattern) {
        if (ch == 'I') {
            result << current;
            current++;
        } else if (ch == 'D') {
            int dCount = 1;
            while (pattern[dCount] == 'D') {
                dCount++;
            }

            for (int i = current + dCount; i >= current; i--) {
                result << i;
            }

            current += dCount + 1;
        }
    }

    result << current;

    return result.str();
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    std::string pattern = "IDID";
    std::string result = findMinimumNumber(pattern);

    // Output the result
    std::cout << result << std::endl;

    return 0;
}
