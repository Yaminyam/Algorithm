#define _USE_MATH_DEFINES

#include<iostream>
#include<cstdio>
#include<cmath>

#include<algorithm>
#include<functional>

#include<string>
#include<vector>
#include<queue>
#include<stack>

using namespace std;
const int INF = numeric_limits<int>::max();
const double pi = M_PI;

int main()
{
	vector<int> a;
	vector<int> b;
	string input;
	cin >> input;
	for (int i = input.size()-1; i >= 0; i--) {
		a.push_back(input[i] - '0');
	}
	cin >> input;
	for (int i = input.size()-1; i >= 0; i--) {
		b.push_back(input[i] - '0');
	}
	vector<int> ans(a.size() + b.size());
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			ans[i + j] += a[i] * b[j];
			if (ans[i + j] >= 2) {
				ans[i + j] -= 2;
				ans[i + j + 1] += 1;
			}
		}
	}
	int i;
	for (i = ans.size() - 1; i >= 0; i--) {
		if (ans[i] == 1)break;
	}
	for (i; i >= 0; i--) {
		cout << ans[i];
	}
}