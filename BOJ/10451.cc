#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

void dfs(int, int);

queue<int> q;
vector<int> v[20001];
int visited1[20001] = { 0, };
int cnt = 0;

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, s;
		int a, b;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			v[i].clear();
			visited1[i] = 0;
			cnt = 0;
		}
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &a);
			v[i].push_back(a);
		}
		for (int i = 1; i <= n; i++)
		{
			sort(v[i].begin(), v[i].end());
		}
		for (int i = 1; i <= n; i++) {
			if (!visited1[i]) {
				dfs(i, 1);
			}
		}
		printf("%d\n", cnt);
	}
}

void dfs(int s, int c)
{
	visited1[s] = true;
	for (int i = 0; i < v[s].size(); i++)
	{
		int next = v[s][i];
		if (!visited1[next])
			dfs(next, 3 - c);
		else cnt++;
	}
}