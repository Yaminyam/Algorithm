#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstdio>
#include<string>

using namespace std;
const int INF = numeric_limits<int>::max();

int main()
{
	int n;
	queue<int> q;
	bool check = true;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	while (1) {
		if (q.size() == 1)break;
		if (check)q.pop();
		else {
			q.push(q.front());
			q.pop();
		}
		check = !check;
	}
	cout << q.back();
}