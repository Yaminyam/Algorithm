#include<iostream>
#include<cstdio>

#include<algorithm>
#include<functional>

#include<string>
#include<vector>
#include<queue>
#include<stack>

using namespace std;
const int INF = numeric_limits<int>::max();

int main()
{
	int n, m;
	cin >> n >> m;
	int cnt = 1;
	while (cnt++) {
		if (n * cnt <= m * (cnt - 1))break;
	}
	cout << cnt;
}