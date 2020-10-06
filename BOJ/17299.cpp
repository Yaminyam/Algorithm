#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> st;
	int n;
	int arr[1000001];
	int count[1000001] = { 0, };
	int ans[1000001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		count[arr[i]]++;
	}

	for (int i = 0; i < n; i++) {
		while (!st.empty() && count[arr[st.top()]] < count[arr[i]]) {
			ans[st.top()] = arr[i];
			st.pop();
		}
		st.push(i);
	}
	while (!st.empty()) {
		ans[st.top()] = -1;
		st.pop();
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << ' ';
	}
}