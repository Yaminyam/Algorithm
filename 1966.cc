#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a;
		int n, m;
		int r = 0;
		queue<pair<int, int>> qu;
		priority_queue<int> pq;
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a);
			qu.push({ a,i });
			pq.push(a);
		}
		while (qu.size())
		{
			int num = qu.front().first;
			int pos = qu.front().second;
			qu.pop();
			if (pq.top() == num)
			{
				pq.pop();
				r++;
				if (pos == m)break;
			}
			else qu.push({ num, pos });
		}
		printf("%d\n", r);
	}
}