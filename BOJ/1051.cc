#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;
const int INF = numeric_limits<int>::max();

int main()
{
	int map[51][51];
	int ans = 0;
	int n, m;
	cin >> n >> m;
	int minnum = min(n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	for (int i = 0; i < minnum; i++) {
		for (int j = 0; j < n - i; j++) {
			for (int k = 0; k < m - i; k++) {
				if (map[j][k] == map[j + i][k] && map[j][k] == map[j][k + i] && map[j][k] == map[j + i][k + i]) {
					ans = max(ans, (i + 1)*(i + 1));
				}
			}
		}
	}
	cout << ans;
	
}