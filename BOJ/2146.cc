#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int map[1001][1001];
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int dist[1001][1001];

void dfs(int x, int y, int count) {
	map[x][y] = count;
	for (int i = 0; i < 4; i++)
	{
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		if (map[nextx][nexty] == 1 && nextx >= 0 && nextx < n && nexty >= 0 && nexty < m)
		{
			dfs(nextx, nexty, count);
		}
	}
}

int main()
{
	int count = 2;
	scanf("%d", &n);
	m = n;

	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 1)
				q.push(make_pair(i, j));
		}

	int result = 987654321;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 1)
			{
				dfs(i, j, count++);
			}
		}
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nextx = x + dx[i];
			int nexty = y + dy[i];
			if (map[nextx][nexty] == 0 && nextx >= 0 && nextx < n && nexty >= 0 && nexty < m)
			{
				q.push(make_pair(nextx,nexty));
				map[nextx][nexty] = map[x][y];
				dist[nextx][nexty] = dist[x][y] + 1;
			}
			else if(map[nextx][nexty] != map[x][y] && map[nextx][nexty] != 0 && dist[nextx][nexty] != 0)
				result = min(result, dist[nextx][nexty] + dist[x][y]);
		}
	}
	printf("%d", result);
}