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
	double r1, r2, r3;
	cin >> r1 >> r2 >> r3;
	printf("%.7lf", 1 / (1 / r1 + 1 / r2 + 1 / r3));
}