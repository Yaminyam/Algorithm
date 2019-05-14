#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int map[101][101];
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int dist[101][101];

int main()
{
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%1d", &map[i][j]);

	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));
	map[0][0] = 0;
	dist[0][0] = 1;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nextx = x + dx[i];
			int nexty = y + dy[i];
			if (map[nextx][nexty] && nextx >= 0 && nextx < n && nexty >= 0 && nexty < m)
			{
				q.push(make_pair(nextx,nexty));
				map[nextx][nexty] = 0;
				dist[nextx][nexty] = dist[x][y] + 1;
			}
		}
	}
	printf("%d", dist[n - 1][m - 1]);
}
