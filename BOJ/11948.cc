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
	int a, b, c, d, e, f;
	int sum = 0;
	cin >> a >> b >> c >> d >> e >> f;
	sum = a + b + c + d + e + f;
	sum -= min(a, min(b, min(c, d)));
	sum -= min(e, f);
	cout << sum;
}