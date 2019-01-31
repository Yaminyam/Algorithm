#include<iostream>
#include<algorithm>
#define INF 987654321

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		int sum[500] = { 0, };
		int dp[500][500] = { 0, };
		scanf("%d", &n);
		int input;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &input);
			sum[i] = sum[i - 1] + input;
		}

		for (int k = 1; k < n; k++)
		{
			for (int i = 1; i <= n - k; i++)
			{
				dp[i][i + k] = INF;
				for (int j = i; j < i + k; j++)
				{
					dp[i][i + k] = min(dp[i][i + k], dp[i][j] + dp[j + 1][i + k]);
				}

				dp[i][i + k] += sum[i + k] - sum[i - 1];
			}
		}
		printf("%d\n", dp[1][n]);
	}
}