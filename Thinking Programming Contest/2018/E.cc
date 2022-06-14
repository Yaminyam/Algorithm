#include<iostream>

using namespace std;

int main()
{
	int R, C, Q;
	int r1, c1, r2, c2;
	scanf("%d %d %d", &R, &C, &Q);
	int map[1001][1001];
	int dp[1001][1001];
	for(int i=0;i<R;i++)
		for (int j = 0; j < C; j++)
			scanf("%d", &map[i][j]);
	dp[0][0] = map[0][0];
	for (int i = 1; i < R; i++)
		dp[i][0] = map[i][0] + dp[i - 1][0];
	for (int j = 1; j < C; j++)
		dp[0][j] = map[0][j] + dp[0][j - 1];
	for(int i=1;i<R;i++)
		for (int j = 1; j < C; j++) {
			dp[i][j] = map[i][j] + dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1];
		}
	
	for (int i = 0; i < Q; i++) {
		int result;
		scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
		result = dp[r2 - 1][c2 - 1] - dp[r2 - 1][c1 - 2] - dp[r1 - 2][c2 - 1] + dp[r1 - 2][c1 - 2];
		result /= ((r2 - r1 + 1) * (c2 - c1 + 1));
		printf("%d\n", result);
	}
}
