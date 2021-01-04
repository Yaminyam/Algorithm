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
	int n, l;
	cin >> n >> l;
	int cnt = 0;
	int i = 1;
	while (cnt < n) {
		int temp = i;
		bool check = true;
		while (temp) {
			if (temp % 10 == l)check = false;
			temp /= 10;
		}
		if (check)cnt++;
		i++;
	}
	cout << i-1;
}