#include<bits/stdc++.h>
using namespace std;
int i = 0;
int sum = 0;

void func(int n, int sum) {
	// if (i > n) return;
	// cout << "hey" << endl;
	// func(i + 1, n);
	// if (i == n) {
	// 	cout << i << endl;
	// 	return;
	// }

	// func(i + 1, n);
	// cout << i << endl;
	// if (i == n) {
	// 	cout << i << endl;
	// 	return;
	// }

	// func(i + 1, n);
	// cout << i << endl;
	// if (i == 0) return;
	// func(i - 1, n);
	// cout << i << endl;

	// if (i == 0) {
	// 	return;
	// }
	// cout << i << endl;
	// func(i - 1, n);

	sum = sum + n;
	if (n == 1) {
		cout << sum << endl;
		return;
	}
	func(n - 1, sum);

}

int func1(int n) {
// 	sum = sum + n;
// 	if (n == 0) return 0;
// 	func1(n - 1);
// 	return sum;

	if (n == 0) return 0;
	return n + func1(n - 1);
}

int fact(int n) {

	if (n == 1) {
		return 1;
	}
	return n * fact(n - 1);

}

void reverseArray(int l, int a[], int r) {

	if (l >= r) {
		return;
	}
	swap(a[l], a[r - i - 1 ]);
	reverseArray(l + 1, a, r - 1);
}

int fibo(int n) {
	if (n <= 1) {
		return n;
	}
	int last = fibo(n - 1);
	int slast = fibo(n - 2);

	return last + slast;
}


int main() {

#ifndef ONLINE_JUDGE
	// for getting from input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif


	// func(n, sum);
	// int z = func1(n);
	// int z = fact(n);
	// cout << z ;
	int n;
	cin >> n;
	// int a[n];
	// for (int j = 0; j < n; j++) {
	// 	cin >> a[j];
	// }
	// for (int j = 0; j < n; j++) {
	// 	cout << a[j] << " ";
	// }
	// reverseArray(0, a, n);
	// for (int j = 0; j < n; j++) {
	// 	cout << a[j] << " ";
	// }

	int ans = fibo(n);
	cout << ans << endl;
}