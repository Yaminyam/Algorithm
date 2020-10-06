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
	double h, w;
	cin >> h >> w;
	if (w > h) {
		int temp;
		temp = w;
		w = h;
		h = temp;
	}
	double ans=0;
	//ans = max(ans, h / 3);
	//ans = max(ans, w / 2);
	ans = max(w / 2, min(h / 3, w));
	printf("%.6lf", ans);
}