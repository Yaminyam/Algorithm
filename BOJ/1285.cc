#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstdio>
#include<string>

using namespace std;
const int INF = numeric_limits<int>::max();

char map[20][20];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	int ans = INF;
	for (int k = 0; k < (1 << n); k++) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int cnt = 0;
			for (int j = 0; j < n; j++) {
				if ((1 << j) & k) {
					if (map[i][j] == 'H') {
						cnt++;
					}
				}
				else if (map[i][j] == 'T') {
					cnt++;
				}
			}
			sum += min(cnt, n - cnt);
		}
		ans = min(ans, sum);
	}
	cout << ans;
}