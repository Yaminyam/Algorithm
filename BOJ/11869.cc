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
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		ans ^= a;
	}
	if (ans == 0) {
		cout << "cubelover";
	}
	else {
		cout << "koosaga";
	}
}