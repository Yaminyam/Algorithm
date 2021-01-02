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
	double aa, bb;
	cout.precision(7);
	cin >> a >> b >> c >> aa >> bb;
	double D;
	D = ((c - aa) / aa) * ((a - bb) / bb);
	cout << (D * b) / (1 + D);
}