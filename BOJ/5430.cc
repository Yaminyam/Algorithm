#include<deque>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int process()
{
	deque<int> dq;
	char str[100010] = {};
	int n;
	scanf("%s", str);
	scanf("%d", &n);
	scanf(" %*c");
	for (int i = 0, x; i++ < n; dq.push_back(x))
		scanf("%d%*c", &x);
	scanf("%*c");
	int rCnt = 0;
	for (int i = 0; str[i]; i++) {
		if (str[i] == 'R')
			rCnt++;
		else {
			if (dq.empty())return 0 * printf("error\n");
			rCnt % 2 ? dq.pop_back() : dq.pop_front();
		}
	}
	if (rCnt % 2)
		reverse(dq.begin(), dq.end());
	printf("[");
	for (int i = 0; i < dq.size() - 1 && dq.size() > 0; i++) {
		printf("%d,", dq.at(i));
	}
	if (dq.size() > 0)
	{
		printf("%d", dq.back());
	}
	return 0 * printf("]\n");
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		process();
	}
}