#include <stdio.h>

int main()
{
	int t;
	int n[1000][10];
	int temp;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &n[i][j]);
		}
	}

	for (int k = 0; k < t; k++)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (n[k][j] > n[k][j + 1])
				{
					temp = n[k][j];
					n[k][j] = n[k][j + 1];
					n[k][j + 1] = temp;
				}
			}
		}
	}

	for (int i = 0; i < t; i++)
	{
		printf("%d\n", n[i][7]);
	}

}