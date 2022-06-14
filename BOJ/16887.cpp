#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base ::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		long long x;
		cin >> x;
		if (x >= 1 && x < 4) ans ^= 0;
		else if (x >= 4 && x < 16) ans ^= 1;
		else if (x >= 16 && x < 82) ans ^= 2;
		else if (x >= 82 && x < 6724) ans ^= 0;
		else if (x >= 6724 && x < 50626) ans ^= 3;
		else if (x >= 50626 && x < 2562991876) ans ^= 1;
		else ans ^= 2;
	}
	if (ans == 0) {
		cout << "cubelover";
	} else {
		cout << "koosaga";
	}
	return 0;
}
