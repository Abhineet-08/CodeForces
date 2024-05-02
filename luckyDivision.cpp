#include <iostream>

bool isLucky(int number) {
	while (number > 0) {
		int digit = number % 10;
		if (digit != 4 && digit != 7) {
			return false;
		}
		number /= 10;
	}
	return true;
}

bool isAlmostLucky(int n) {
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0 && isLucky(i)) {
			return true;
		}
	}
	return false;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	std::cin >> n;

	if (isAlmostLucky(n)) {
		std::cout << "YES" << std::endl;
	} else {
		std::cout << "NO" << std::endl;
	}

	return 0;
}
