#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstdio>
#include<string>

using namespace std;
const int INF = numeric_limits<int>::max();

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

int map[1001][1001];
int n, m;

void dfs(int x, int y)
{
	map[x][y] = 2;
	for(int i=0;i<4;i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
			if (!map[nx][ny]) {
				dfs(nx, ny);
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	for (int i = 0; i < m; i++) {
		if (!map[0][i]) {
			dfs(0, i);
		}
	}

	for (int i = 0; i < m; i++) {
		if (map[n-1][i] == 2) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}