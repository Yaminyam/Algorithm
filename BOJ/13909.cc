#include<iostream>
#include<cstdio>

#include<algorithm>
#include<functional>
#include<cmath>

#include<string>
#include<vector>
#include<queue>
#include<stack>


using namespace std;
const int INF = numeric_limits<int>::max();

int main()
{
	int n;
	int cnt = 0;
	vector<int> arr;
	cin >> n;
	for (int i = 1; i <= sqrt(INF); i++) {
		arr.push_back(i*i);
	}
	int i;
	for (i = 0; i < arr.size(); i++) {
		if (n < arr[i])break;
	}
	cout << i;
}