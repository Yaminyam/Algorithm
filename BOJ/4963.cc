#include <iostream>
using namespace std;

void dfs(int, int);

int map[51][51];
int n, m;
int arr[8][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1} };

int main()
{
	while (true) {
		int cnt = 0;
		scanf("%d %d", &n, &m);
		if (n == 0 && m == 0)return 0;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &map[i][j]);

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (map[i][j] == 1)
				{
					dfs(i, j);
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
}

void dfs(int i, int j)
{
	map[i][j] = 0;
	for (int k = 0; k < 8; k++) {
		int dx, dy;
		dx = i + arr[k][0];
		dy = j + arr[k][1];
		if (map[dx][dy] == 1 && dx >= 0 && dy >= 0)
			dfs(dx, dy);
	}
}