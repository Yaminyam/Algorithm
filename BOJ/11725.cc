#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int parent[100001];

queue<int> q;

int main()
{
	int n, m, s;
	int a, b;
	vector<int> v[100001];
	bool visited[100001] = { false };
	scanf("%d", &n);
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}

	q.push(1);
	visited[1] = true;

	while (!q.empty())
	{
		int front = q.front();
		q.pop();
		for (int i = 0; i < v[front].size(); i++)
		{
			int next = v[front][i];
			if (!visited[next])
			{
				parent[next] = front;
				q.push(next);
				visited[next] = true;
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		printf("%d\n", parent[i]);
	}
}