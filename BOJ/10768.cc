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
	int m;
	int d;
	cin >> m >> d;
	int ans;
	if (m < 2) {
		cout << "Before";
		return 0;
	}
	else if (m == 2) {
		int ans;
		if (d < 18) {
			cout << "Before";
			return 0;
		}
		else if (d == 18) {
			cout << "Special";
			return 0;
		}
		else if (d > 18) {
			cout << "After";
			return 0;
		}
	}
	else if (m > 2) {
		cout << "After";
		return 0;
	}
}