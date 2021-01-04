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
	int n;
	int arr[1001];
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		int temp = arr[i];
		for (arr[i]--; arr[i] >= 0; arr[i]--) {
			int ans = 0;
			for (int k = 0; k < n; k++) {
				ans ^= arr[k];
			}
			if (ans == 0) {
				cnt++;
				break;
			}
		}
		arr[i] = temp;
	}
	cout << cnt;
	
}