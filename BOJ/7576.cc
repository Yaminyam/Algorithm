#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int map[1001][1001];
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int dist[1001][1001];

int main()
{
	scanf("%d %d", &m, &n);

	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] == 1)
				q.push(make_pair(i, j));
		}

	int result = 0;
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
				map[nextx][nexty] = 1;
				dist[nextx][nexty] = dist[x][y] + 1;
				result = max(result, dist[nextx][nexty]);
			}
		}
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0)
				result = -1;
		}

	printf("%d", result);
}
