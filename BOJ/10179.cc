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
	int n;
	cin >> n;
	while (n--) {
		double x;
		cin >> x;
		printf("$%.2lf\n", 0.8*x);
	}
}