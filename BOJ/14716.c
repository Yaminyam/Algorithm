#include <stdio.h>

void dfs(i,j);

int map[250][250];
int m, n;
int count = 0;

int main()
{
	scanf("%d %d", &m, &n);

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &map[i][j]);
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == 1)
			{
				dfs(i,j);
				count++;
			}
		}
	}

	printf("%d", count);
}

void dfs(i,j)
{
	map[i][j] = 0;
	if (map[i][j + 1] == 1)
	{
		dfs(i, j + 1);
	}
	if (map[i][j - 1] == 1)
	{
		dfs(i, j - 1);
	}
	if (map[i + 1][j] == 1)
	{
		dfs(i + 1, j);
	}
	if (map[i - 1][j] == 1)
	{
		dfs(i - 1, j);
	}
	if (map[i - 1][j - 1] == 1)
	{
		dfs(i - 1, j - 1);
	}
	if (map[i - 1][j + 1] == 1)
	{
		dfs(i - 1, j + 1);
	}
	if (map[i + 1][j - 1] == 1)
	{
		dfs(i + 1, j - 1);
	}
	if (map[i + 1][j + 1] == 1)
	{
		dfs(i + 1, j + 1);
	}
}