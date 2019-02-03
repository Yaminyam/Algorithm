#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int dp[100001];
	int n;
	scanf("%d", &n);
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		dp[i] = i;
		for (int j = 1; j*j <= i; j++) {
			dp[i] = min(dp[i - j * j] + 1,dp[i]);
		}
	}
	printf("%d", dp[n]);
}