#define _USE_MATH_DEFINES

#include<iostream>
#include<cstdio>
#include<cmath>

#include<algorithm>
#include<functional>

#include<string>
#include<vector>
#include<queue>
#include<stack>

using namespace std;
const int INF = numeric_limits<int>::max();
const double pi = M_PI;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int ans = 0;
	if (a < 0) {
		ans += -a * c;
		ans += d;
		ans += b * e;
	}
	else {
		ans += (b - a)*e;
	}
	cout << ans;

}