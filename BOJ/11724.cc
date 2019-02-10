#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

void dfs(int, vector<int>[]);

queue<int> q;
bool visited1[1001] = { false };

int main()
{
	int n, m, s;
	int a, b;
	int count = 0;
	vector<int> v[1001];
	scanf("%d %d", &n, &m);
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
		if (!visited1[i]) {
			dfs(i, v);
			count++;
		}
	}
	printf("%d", count);
}

void dfs(int s, vector<int> v[])
{
	visited1[s] = true;
	for (int i = 0; i < v[s].size(); i++)
	{
		int next = v[s][i];
		if (!visited1[next])
			dfs(next, v);
	}
}