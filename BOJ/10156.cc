#include <iostream>
#include <cstdio>

#include <algorithm>
#include <functional>

#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
const int INF = numeric_limits<int>::max();

int main()
{
	int k, n, m;
	cin >> k >> n >> m;
	int ans = k * n - m;
	if (ans < 0)ans = 0;
	cout << ans;
}