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

	priority_queue<int, vector<int>, less<int>> maxheap;
	priority_queue<int, vector<int>, greater<int>> minheap;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (!x) {
			if (!minheap.empty()) {
				cout << minheap.top() << "\n";
				minheap.pop();
			}
			else {
				cout << "0\n";
			}
		}
		else {
			minheap.push(x);
		}
	}

}