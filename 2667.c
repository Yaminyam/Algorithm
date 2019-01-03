#include <stdio.h>

void dfs(i, j);
void sort();

char map[25][26];
int m;
int count = 0;
int count2[313] = { 0, };

int main()
{
	scanf("%d", &m);

	for (int i = 0; i < m; i++)
	{
		scanf("%s", &map[i]);
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == '1')
			{
				dfs(i, j);
				count2[count]++;
				count++;
			}
		}
	}

	sort();
	printf("%d\n", count);
	for (int i = 0; i < count; i++)
	{
		printf("%d\n", count2[i]);
	}
}

void sort()
{
	int temp;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (count2[j] > count2[j + 1])
			{
				temp = count2[j];
				count2[j] = count2[j + 1];
				count2[j + 1] = temp;
			}
		}
	}
}

void dfs(i, j)
{
	map[i][j] = '0';
	if (map[i][j + 1] == '1')
	{
		count2[count]++;
		dfs(i, j + 1);
	}
	if (map[i][j - 1] == '1')
	{
		count2[count]++;
		dfs(i, j - 1);
	}
	if (map[i + 1][j] == '1')
	{
		count2[count]++;
		dfs(i + 1, j);
	}
	if (map[i - 1][j] == '1')
	{
		count2[count]++;
		dfs(i - 1, j);
	}
}