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
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << abs(a + d - b - c);
}