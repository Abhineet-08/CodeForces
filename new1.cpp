#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

std::vector<int> findMinimumNumber(const std::string& pattern) {
    int current = 1;
    std::vector<int> result;

    for (char ch : pattern) {
        if (ch == 'I') {
            result.push_back(current);
            current++;
        } else if (ch == 'D') {
            int dCount = 1;
            while (pattern[dCount] == 'D') {
                dCount++;
            }

            for (int i = current + dCount; i >= current; i--) {
                result.push_back(i);
            }

            current += dCount + 1;
        }
    }

    result.push_back(current);

    return result;
}

void findMissingAndDuplicate(const std::vector<int>& arr) {
    int n = arr.size();
    unordered_set<int> numSet;
    
    int duplicateNumber, missingNumber;

    // Find the duplicate number
    for (int num : arr) {
        if (numSet.count(num) == 0) {
            numSet.insert(num);
        } else {
            duplicateNumber = num;
        }
    }

    // Find the missing number
    for (int i = 1; i <= n; ++i) {
        if (numSet.count(i) == 0) {
            missingNumber = i;
            break;
        }
    }

    std::cout << "Missing Number: " << missingNumber << std::endl;
    std::cout << "Duplicate Number: " << duplicateNumber << std::endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // Example usage:
    std::vector<int> arr = {2,2};
    
    findMissingAndDuplicate(arr);

    return 0;
}
