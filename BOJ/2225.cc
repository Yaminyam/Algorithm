#include<iostream>
#include<algorithm>
 

using namespace std;

long long dp[201][201];
long long mod = 1000000000;

int main()
{
	int n,m;
	scanf("%d %d", &n, &m);
	dp[0][0] = 1;
	for (int i = 1; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			for (int k = 0; k <= j; k++) {
				dp[i][j] += dp[i - 1][k];
				dp[i][j] %= mod;
			}
		}
	}
	printf("%lld", dp[m][n]);
}