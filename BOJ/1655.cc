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
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (maxheap.size() > minheap.size()) {
			minheap.push(x);
		}
		else {
			maxheap.push(x);
		}

		if (!maxheap.empty() && !minheap.empty()) {
			if (maxheap.top() > minheap.top()) {
				int temp1 = maxheap.top();
				int temp2 = minheap.top();
				maxheap.pop();
				minheap.pop();
				maxheap.push(temp2);
				minheap.push(temp1);
			}
		}
		cout << maxheap.top() << "\n";
	}
	
}