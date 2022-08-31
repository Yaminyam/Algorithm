#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <bitset>

using namespace std;

int time_add(int h, int m, int add) {
	int hh = h;
	int mm = m;
	h += add / 60;
	m += add % 60;
	if (m >= 60) {
		h++;
		m -= 60;
	}
	if (h >= 24) {
		h %= 24;
	}
	int h1, h2;
	int m1, m2;
	h1 = h / 10;
	h2 = h % 10;
	m1 = m / 10;
	m2 = m % 10;
	if (hh == h && mm == m && add != 0) return -1;
	if (h1 == m2 && h2 == m1) return 1;
	return 0;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int h, m, a;
		int ans = 0;
		scanf("%d:%d %d", &h, &m, &a);
		for (int j = 0; j < 1440; j++) {
			int check = time_add(h, m, j*a);
			if (check == -1) break;
			if (check) {
				ans++;
			}
		}
		cout << ans << "\n";
	}
}
