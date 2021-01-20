#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstdio>
#include<string>

using namespace std;
const int INF = numeric_limits<int>::max();

vector<int> V;
int n, m;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		vector<bool> check(10);
		int cnt = 0;
		cin >> x;
		while (x) {
			if (!check[x % 10]) {
				check[x % 10] = true;
				cnt++;
			}
			x /= 10;
		}
		cout << cnt << "\n";
	}
}