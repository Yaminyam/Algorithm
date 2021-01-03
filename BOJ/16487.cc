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
	double a, b, c;
	double m;
	double n;
	cin >> a >> b >> c >> m;
	n = b - m;
	if (a > c) {
		double temp = m;
		m = n;
		n = temp;
	}
	double ans;
	ans = (m * a*a + n * c*c - b * m * n) / b;
	printf("%.7lf", ans);
}