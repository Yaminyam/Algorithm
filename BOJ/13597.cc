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
	int a, b;
	cin >> a >> b;
	int ans;
	if (a == b) {
		ans = a;
	}
	else {
		ans = max(a, b);
	}
	cout << ans;
}