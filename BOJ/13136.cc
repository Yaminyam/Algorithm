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
	long long r, c, n;
	cin >> r >> c >> n;
	cout << ((r + n - 1) / n) * ((c + n - 1) / n);
}