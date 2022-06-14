#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main() {
	ios_base ::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long a[10000001];
	a[0] = 1;
	a[1] = 1;
	a[2] = 0;
	a[3] = 0;
	for (int n = 4; n <= 10000000; n++) {
		a[n] = ((n + 1) * a[n - 1]) % MOD;
		a[n] -= ((n - 2) * a[n - 2] + MOD) % MOD;
		a[n] += MOD;
		a[n] %= MOD;
		a[n] -= ((n - 5) * a[n - 3] + MOD) % MOD;
		a[n] += MOD;
		a[n] %= MOD;
		a[n] += ((n - 3) * a[n - 4]) % MOD;
		a[n] %= MOD;
	}
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cout << a[x] << "\n";
	}
}
