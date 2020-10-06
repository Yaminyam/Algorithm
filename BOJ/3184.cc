#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

char map[1001][1001];
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int countv = 0;
int counto = 0;
int sumv = 0;
int sumo = 0;

void dfs(int x, int y) {
	if (map[x][y] == 'v')countv++;
	else if (map[x][y] == 'o')counto++;
	map[x][y] = '#';
	for (int i = 0; i < 4; i++)
	{
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		if (map[nextx][nexty] != '#' && nextx >= 0 && nextx < n && nexty >= 0 && nexty < m)
		{
			dfs(nextx, nexty);
		}
	}
}

int main()
{
	
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			scanf(" %1c", &map[i][j]);
		}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] != '#')
			{
				dfs(i, j);
				if (counto > countv)sumo += counto;
				else sumv += countv;
				counto = 0;
				countv = 0;
			}
		}
	
	printf("%d %d", sumo, sumv);
}