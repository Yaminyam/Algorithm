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
	string s;
	cin >> s;
	long long sum = 0;
	long long r = 1;
	for (int i = 0; i < n; i++) {
		sum = (sum + (s[i] - 'a' + 1) * r) % 1234567891;

		r = (r * 31) % 1234567891;
	}
	cout << sum;
}