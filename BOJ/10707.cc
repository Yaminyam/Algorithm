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
	int p;
	cin >> a >> b >> c >> d >> p;
	int x, y;
	x = a*p;
	if (p <= c) {
		y = b;
	}
	else {
		p -= c;
		y = b + p * d;
	}
	if (x < y) {
		cout << x;
	}
	else {
		cout << y;
	}
}