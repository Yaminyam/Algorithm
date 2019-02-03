#include<iostream>
#include<algorithm>

using namespace std;
int dp[31];
int main()
{
	int n;
	scanf("%d", &n);
	dp[0] = 1;
	for (int i = 2; i <= n; i += 2) {
		dp[i] = 3 * dp[i - 2];
		for (int j = 0; j <= i - 4; j += 2) {
			dp[i] += dp[j] * 2;
		}
	}
	printf("%d", dp[n]);
}