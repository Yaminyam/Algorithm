#include <bits/stdc++.h>
using namespace std;

int king(int x, int y) {
	if (x % 2 == 0 && y % 2 == 0) return 0;
	if (x % 2 == 1 && y % 2 == 1) return 2;
	if (min(x, y) % 2 == 0 && max(x, y) % 2 == 1) return 1;
	return 3;
}

int knight(int x, int y) {
    if (min(x,y)%3 == 1 && x != y)  return 1;
    if (min(x,y)%3 == 2 && abs(x-y) > 1) return 2;
    return 0;
}

int bishop(int x, int y) {
	return min(x, y);
}

int rook(int x, int y) {
	return x^y;
}

int palace(int x, int y) {
	return ((x / 3) ^ (y / 3)) * 3 + (x + y) % 3;
}

int main() {
	ios_base ::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x, y;
		char c;
		cin >> x >> y >> c;
		if (c == 'R') ans ^= rook(x, y);
		if (c == 'B') ans ^= bishop(x, y);
		if (c == 'K') ans ^= king(x, y);
		if (c == 'N') ans ^= knight(x, y);
		if (c == 'P') ans ^= palace(x, y);
	}
	if (ans == 0) {
		cout << "cubelover";
	} else {
		cout << "koosaga";
	}
	return 0;
}
