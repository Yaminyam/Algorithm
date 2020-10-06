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
	double a;
	cin >> a;
	double ans = 100000 / (a * 1609.344/3.785411784);
	printf("%.6lf", ans);
}