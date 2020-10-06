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
	int t;
	int a, b, c;
	cin >> t;
	a = t / 300;
	t %= 300;
	b = t / 60;
	t %= 60;
	c = t / 10;
	t %= 10;
	if (t) {
		cout << -1;
		return 0;
	}
	cout << a << " " << b << " " << c;
}