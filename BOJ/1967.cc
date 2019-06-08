#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

int cost1[10001];
int cost2[10001];

queue<int> q;

int main()
{
	int n, m, s;
	int a, b;
	vector<pair<int,int>> v[10001];
	bool visited1[10001] = { false };
	bool visited2[10001] = { false };
	scanf("%d", &n);
	for (int i = 0; i < n - 1; i++)
	{
		int num;
		scanf("%d", &num);
		scanf("%d", &a);
		scanf("%d", &b);
		v[num].push_back(make_pair(a, b));
		v[a].push_back(make_pair(num, b));
	}

	q.push(1);
	visited1[1] = true;
	int start = 1;

	while (!q.empty())
	{
		int front = q.front();
		q.pop();
		for (int i = 0; i < v[front].size(); i++)
		{
			int next = v[front][i].first;
			if (!visited1[next])
			{
				cost1[next] = cost1[front] + v[front][i].second;
				q.push(next);
				visited1[next] = true;
				if (cost1[next] > cost1[start])
					start = next;
			}
		}
	}

	q.push(start);
	visited2[start] = true;
	int result = 0;

	while (!q.empty())
	{
		int front = q.front();
		q.pop();
		for (int i = 0; i < v[front].size(); i++)
		{
			int next = v[front][i].first;
			if (!visited2[next])
			{
				cost2[next] = cost2[front] + v[front][i].second;
				q.push(next);
				visited2[next] = true;
				if (cost2[next] > result)
					result = cost2[next];
			}
		}
	}
	printf("%d", result);
}