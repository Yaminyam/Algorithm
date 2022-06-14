#include <bits/stdc++.h>
using namespace std;

vector<int> fib = {1, 1};
int gn[3000001];

int main() {
	while (fib.back() <= 3e6) {
		fib.push_back(fib[fib.size() - 2] + fib[fib.size() - 1]);
	}

	for (int i = 1; i <= 3e6; i++) {
		bitset<31> mex;
		for (int f : fib) {
			int state = i - f;
			if (state < 0) break;
			mex[gn[state]] = 1;
		}
		while (mex[gn[i]]) gn[i]++;
	}

	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		ans ^= gn[p];
	}
	if (ans == 0) {
		cout << "cubelover";
	} else {
		cout << "koosaga";
	}
	return 0;
}
