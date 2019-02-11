#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int dfs(int, int, int);

queue<int> q;
int v[100001];
int first_v[100001];
int visited1[100001] = { 0, };

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, s;
		int a, b;
		int cnt = 0;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &v[i]);
			first_v[i] = 0;
			visited1[i] = 0;
		}
		for (int i = 1; i <= n; i++) {
			if (!visited1[i]) {
				cnt += dfs(i, i, 1);
			}
		}
		printf("%d\n", n- cnt);
	}
}

int dfs(int first, int s, int cnt)
{
	if (visited1[s]) {
		if (first != first_v[s])
			return 0;
		return cnt - visited1[s];
	}
	first_v[s] = first;
	visited1[s] = cnt;
	return dfs(first, v[s], cnt + 1);
}