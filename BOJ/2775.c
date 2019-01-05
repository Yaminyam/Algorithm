#include<stdio.h>

int main()
{
	int a;
	int b, c;
	int num[15][14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	scanf("%d", &a);
	for (int i = 1; i < 15; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if (j == 0)num[i][j] = 1;
			else num[i][j] = num[i - 1][j] + num[i][j - 1];
		}
	}
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &b, &c);
		printf("%d\n", num[b][c-1]);
	}
}