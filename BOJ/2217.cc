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
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	vector<int> arr;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
		sum += x;
	}
	sort(arr.begin(), arr.end());
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = max(arr[i] * (n - i), ans);
	}
	cout << ans;
}