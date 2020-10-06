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
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int x3, x4, y3, y4;
	cin >> x3 >> y3 >> x4 >> y4;
	int lx = min(x1, x3);
	int rx = max(x2, x4);
	int ly = min(y1, y3);
	int ry = max(y2, y4);

	int side = max(rx - lx, ry - ly);
	cout << side * side;

}