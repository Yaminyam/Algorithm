#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int input[10001];
	int dp[10001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
	}
	dp[0] = input[0];
	dp[1] = input[0] + input[1];
	for (int i = 2; i < n; i++) {
		dp[i] = max(max(dp[i - 1], dp[i - 2] + input[i]), dp[i - 3] + input[i - 1] + input[i]);
	}
	printf("%d", dp[n - 1]);
}