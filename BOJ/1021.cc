#include<deque>
#include<iostream>

using namespace std;

int main()
{
	deque<int> dq;
	int n, m;
	int count = 0;
	int x;
	bool front = false;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		dq.push_back(i);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		front = false;
		for (int j = 0; j <= dq.size() / 2; j++)
		{
			if (dq.at(j) == x)front = true;
		}
		if (front)
		{
			while (1)
			{
				if (dq.front() == x)
				{
					dq.pop_front();
					break;
				}
				int a = dq.front();
				dq.pop_front();
				dq.push_back(a);
				count++;
			}
		}
		else
		{
			while (1)
			{
				if (dq.front() == x)
				{
					dq.pop_front();
					break;
				}
				int a = dq.back();
				dq.pop_back();
				dq.push_front(a);
				count++;
			}
		}
	}
	printf("%d", count);
}