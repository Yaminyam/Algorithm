#include <iostream>
using namespace std;

int main() {
	long long n, r, p;
	cin >> n;
	long long t1 = 1;
	for (long long i = 1; i <= n; i++) {
		t1 *= i;
	}
	cout << t1 << '\n';
	return 0;
}