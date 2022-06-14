#include <bits/stdc++.h>
using namespace std;
const int m = 10;
int d[m][m];
int main() {
	d[0][0] = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 && j == 0) continue;
			unordered_set<int> s;
			for (int k = 0; k < min(i, j); k++) {
				s.insert(d[i-k][j-k]);
			}
			for (int k = 0; k < i; k++) {
				s.insert(d[k][j]);
			}
			for (int k = 0; k < j; k++) {
				s.insert(d[i][k]);
			}
			for (int k = 0;; k++) {
				if (s.count(k) == 0) {
					d[i][j] = k;
					break;
				}
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << d[i][j] << ' ';
		}
		cout << '\n';
	}
}
