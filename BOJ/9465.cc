#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long a[100001][2];
long long d[100001][3];

int main() {
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			scanf("%lld", &a[i][0]);
		}
		for (int i = 1; i <= n; i++)
		{
			scanf("%lld", &a[i][1]);
		}
		d[0][0] = d[0][1] = d[0][2] = 0;
		for (int i = 1; i <= n; i++)
		{
			d[i][0] = max(d[i - 1][0], max(d[i - 1][1], d[i - 1][2]));
			d[i][1] = max(d[i - 1][0], d[i - 1][2]) + a[i][0];
			d[i][2] = max(d[i - 1][0], d[i - 1][1]) + a[i][1];
		}
		long long result = 0;
		for (int i = 1; i <= n; i++)
		{
			result = max(result, max(d[n][0], max(d[n][1], d[n][2])));
		}
		printf("%lld\n", result);
	}
}