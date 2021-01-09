#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstdio>
#include<string>

using namespace std;
const int INF = numeric_limits<int>::max();

bool check[100000001];

int main()
{
	int n, c;
	cin >> n >> c;
	vector<int> input(n);
	bool ans = false;
	for (int i = 0; i < n; i++) {
		cin >> input[i];
		check[input[i]] = true;
	}
	ans = check[c];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (input[i] + input[j] == c) {
				ans = true;
				break;
			}
			else if (input[i] + input[j] < c) {
				int diff = c - (input[i] + input[j]);
				if (check[diff] && diff != input[i] && diff != input[j]) {
					ans = true;
					break;
				}
			}
		}
		if (ans)break;
	}

	cout << ans;
}