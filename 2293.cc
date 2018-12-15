#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	int cost[100];
	int dp[10001] = { 0, };
	dp[0] = 1;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &cost[i]);
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			if(j-cost[i]>=0)
				dp[j] += dp[j - cost[i]];
		}
	}
	printf("%d", dp[k]);
}