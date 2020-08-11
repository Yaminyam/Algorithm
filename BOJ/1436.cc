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
	int cnt = 0;
	cin >> n;
	for (int i = 1;; i++) {
		string a = to_string(i);
		int cnt6 = 0;
		for (int j = 0; j < a.size(); j++) {
			if (a[j] == '6')cnt6++;
			else cnt6 = 0;
			if (cnt6 == 3) {
				cnt++;
				break;
			}
		}
		if (cnt == n) {
			cout << i;
			return 0;
		}
	}
}