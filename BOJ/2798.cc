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
	int n, m;
	int ans = 0;
	cin >> n >> m;
	vector<int> card(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> card[i];
	}
	for (int i = 0; i < n-2; i++) {
		for (int j = i+1; j < n-1; j++) {
			for (int k = j+1; k < n; k++) {
				if (card[i] + card[j] + card[k] <= m) {
					ans = max(ans, card[i] + card[j] + card[k]);
				}
			}
		}
	}
	cout << ans;
}