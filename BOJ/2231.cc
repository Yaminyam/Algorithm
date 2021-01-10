#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstdio>
#include<string>

using namespace std;
const int INF = numeric_limits<int>::max();

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		int m = i;
		while (m) {
			sum += m % 10;
			m /= 10;
		}
		if (n == i + sum) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
}