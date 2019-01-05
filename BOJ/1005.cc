#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
	int time[1001];
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, k;
		int result[1001] = { 0, };
		vector<int> graph[1001];
		int check[1001] = { 0, };
		scanf("%d %d", &n, &k);
		for (int i = 0; i < n; i++)
			scanf("%d", time + i + 1);
		int x, y;
		for (int i = 0; i < k; i++) {
			scanf("%d %d", &x, &y);
			graph[x].push_back(y);
			check[y]++;
		}

		int w;
		scanf("%d", &w);
		queue<int> first;
		for (int i = 1; i <= n; i++)
			if (!check[i])first.push(i);

		while (check[w] > 0) {
			int front = first.front();
			first.pop();
			for (int i : graph[front]) {
				result[i] = max(result[i], result[front] + time[front]);
				if (--check[i] == 0)first.push(i);
			}
		}
		printf("%d\n", result[w] + time[w]);
	}
}