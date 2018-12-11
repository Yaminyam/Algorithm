#include<iostream>

using namespace std;

int main()
{
	int pascal[1001][1001];
	int a, b;
	for (int i = 0; i <= 1000; i++)
	{
		pascal[i][0] = 1;
		pascal[i][i] = 1;
	}
	pascal[1][1] = 1;
	for (int i = 2; i < 1001; i++)
	{
		for (int j = 1; j < i; j++)
		{
			pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
			pascal[i][j] %= 10007;
		}
	}
	scanf("%d %d", &a, &b);
	printf("%d", pascal[a][b]);
}