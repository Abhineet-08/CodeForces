#include <iostream>

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long n;
    std::cin >> n;

    long long result;

    if (n % 2 == 0) {
        result = n / 2;
    } else {
        result = -((n / 2) + 1);
    }

    std::cout << result << std::endl;

    return 0;
}
