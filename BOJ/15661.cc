#include <iostream>
#include <cstdio>

#include <algorithm>
#include <functional>

#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
const int INF = numeric_limits<int>::max();

int main()
{
	
	int n;
	cin >> n;
	int arr[21][21];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	int ans = INF;
	for (int k = 2; k < n-1; k++) {
		
		vector<int> v;
		for (int i = 0; i < k; i++) v.push_back(0);
		for (int i = 0; i < n-k; i++) v.push_back(1);

		do {
			vector<int> start;
			vector<int> link;
			for (int i = 0; i < v.size(); i++) {
				if (v[i]) start.push_back(i);
				else link.push_back(i);
			}
			int ssum = 0;
			int lsum = 0;
			for (int i = 0; i < n-k; i++) {
				for (int j = i + 1; j < n-k; j++) {
					ssum += arr[start[i]][start[j]] + arr[start[j]][start[i]];
				}
			}
			for (int i = 0; i < k; i++) {
				for (int j = i + 1; j < k; j++) {
					lsum += arr[link[i]][link[j]] + arr[link[j]][link[i]];
				}
			}
			
			ans = min(ans, abs(ssum - lsum));
		} while (next_permutation(v.begin(), v.end()));
	}
	cout << ans << "\n";
}