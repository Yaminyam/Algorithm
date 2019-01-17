#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long d[10000][10];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i <= 9; i++)
	{
		d[1][i] = 1;
	}
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				d[i][j] += d[i - 1][k];
				d[i][j] %= 10007;
			}
		}
	}
	long long result = 0;
	for (int i = 0; i <= 9; i++)
	{
		result += d[n][i];
	}
	result %= 10007;
	printf("%lld", result);

}