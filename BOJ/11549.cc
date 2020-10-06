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
	cin >> t;
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		int x;
		cin >> x;
		if (x == t)cnt++;
	}
	cout << cnt;
}