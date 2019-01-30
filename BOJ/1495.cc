#include<iostream>
#include<algorithm>

using namespace std;

bool dp[100][1001];

int main()
{
	int n, s, m;
	int input[100];
	scanf("%d %d %d", &n, &s, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
	}

	if(s + input[0] <= m)
		dp[0][s + input[0]] = true;
	if(s - input[0] >= 0)
		dp[0][s - input[0]] = true;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= m; j++) {
			if (dp[i - 1][j] == true) {
				if (j + input[i] <= m)
					dp[i][j + input[i]] = true;
				if (j - input[i] >= 0)
					dp[i][j - input[i]] = true;
			}
		}
	}

	for (int i = m; i >= 0; i--) {
		if (dp[n - 1][i]) {
			printf("%d", i);
			return 0;
		}
	}
	printf("-1");
}