#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
const int INF = numeric_limits<int>::max();

int main()
{
	long long n;
	cin >> n;
	vector<long long> v;
	int p[1000001];
	vector<int> input;
	vector<int> print;
	v.push_back(-INF);
	long long x;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		input.push_back(x);
		if (v.back() < input[i]) {
			v.push_back(input[i]);
			ans++;
			p[i] = ans;
		}
		else {
			auto it = lower_bound(v.begin(), v.end(), x);
			*it = x;
			p[i] = it - v.begin();
		}
	}
	cout << ans << "\n";
	for (int i = n; i >= 0 && ans >= 0; i--) {
		if (p[i] == ans) {
			print.push_back(input[i]);
			ans--;
		}
	}
	for (int i = print.size() - 1; i >= 0; i--) {
		printf("%d ", print[i]);
	}
}