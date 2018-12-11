#include<iostream>

using namespace std;

int main()
{
	int pascal[11][11];
	int a, b;
	for (int i = 0; i <= 10; i++)
	{
		pascal[i][0] = 1;
		pascal[i][i] = 1;
	}
	pascal[1][1] = 1;
	for (int i = 2; i < 11; i++)
	{
		for (int j = 1; j < i; j++)
		{
			pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
		}
	}
	scanf("%d %d", &a, &b);
	printf("%d", pascal[a][b]);
}