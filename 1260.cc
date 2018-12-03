#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

void dfs(int, vector<int>[], bool[]);
void bfs(int, vector<int>[], bool[]);

queue<int> q;

int main()
{
	int n, m, s;
	int a, b;
	vector<int> v[1001];
	bool visited1[1001] = {false};
	bool visited2[1001] = {false};
	scanf("%d %d %d", &n, &m, &s);
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
	dfs(s, v, visited1);
	printf("\n");
	bfs(s, v, visited2);
	printf("\n");
}

void dfs(int s, vector<int> v[], bool visited1[])
{
	visited1[s] = true;
	printf("%d ", s);
	for (int i = 0; i < v[s].size(); i++)
	{
		int next = v[s][i];
		if (!visited1[next])
			dfs(next, v, visited1);
	}
}

void bfs(int v, vector<int> graph[], bool visited[])
{
	q.push(v);
	visited[v] = true;

	while (!q.empty())
	{
		int front = q.front();
		q.pop();
		printf("%d ", front);

		for (size_t i = 0; i < graph[front].size(); i++)
		{
			int next = graph[front][i];
			if (!visited[next])
			{
				q.push(next);
				visited[next] = true;
			}
		}
	}
}