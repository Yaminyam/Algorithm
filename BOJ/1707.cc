#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

void dfs(int, int);

queue<int> q;
int color[20001];
vector<int> v[20001];
int visited1[20001] = { 0, };

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m, s;
		int a, b;
		scanf("%d %d", &n, &m);
		for (int i = 1; i <= n; i++) {
			v[i].clear();
			color[i] = 0;
			visited1[i] = 0;
		}
		for (int i = 0; i < m; i++)
		{
			scanf("%d %d", &a, &b);
			v[a].push_back(b);
			v[b].push_back(a);
		}
		for (int i = 1; i <= n; i++)
		{
			sort(v[i].begin(), v[i].end());
		}
		for (int i = 1; i <= n; i++) {
			if (color[i] == 0) {
				dfs(i, 1);
			}
		}
		bool ok = true;
		for (int i = 1; i <= n; i++) {
			for (int k = 0; k<v[i].size(); k++) {
				int j = v[i][k];
				if (color[i] == color[j]) {
					ok = false;
				}
			}
		}
		printf("%s\n", ok ? "YES" : "NO");
	}
}

void dfs(int s, int c)
{
	color[s] = c;
	visited1[s] = true;
	for (int i = 0; i < v[s].size(); i++)
	{
		int next = v[s][i];
		if (!visited1[next])
			dfs(next, 3 - c);
	}
}