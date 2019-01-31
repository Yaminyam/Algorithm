#include<iostream>

using namespace std;

int main()
{
	long long dp[100] = { 1,1,1,2,2 };
	int t;
	for (int i = 5; i < 100; i++) {
		dp[i] = dp[i - 1] + dp[i - 5];
	}
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%lld\n", dp[n - 1]);
	}
}