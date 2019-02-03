#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int input[100001];
	int dp[100001];
	int result = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
	}
	dp[0] = input[0];
	result = dp[0];
	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] + input[i], input[i]);
		result = max(dp[i], result);
	}
	printf("%d", result);
	
}