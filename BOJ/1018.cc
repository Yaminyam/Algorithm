#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	int map[50][50];
	char temp;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			scanf(" %c", &temp);
			if (temp == 'W')map[i][j] = 1;
			else if (temp == 'B')map[i][j] = 0;
		}

	int mincount = 64;

	for(int i = 0; i < n - 7; i++)
		for (int j = 0; j < m - 7; j++)
		{
			int color = 0;
			int count = 0;
			for (int k = i; k < i + 8; k++)
			{
				for (int l = j; l < j + 8; l++)
				{
					if (map[k][l] != color)
						count++;
					color = color == 1 ? 0 : 1;
				}
				color = color == 1 ? 0 : 1;
			}
			count = min(64 - count, count);
			mincount = min(mincount, count);
		}

	printf("%d", mincount);

	
}