#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> node[101];
bool check[101];
int cnt = 0;

void dfs(int idx) {
	check[idx] = true;
	cnt++;
	for (int i = 0; i < node[idx].size(); i++) {
		if (!check[node[idx][i]]) {
			dfs(node[idx][i]);
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}
	dfs(1);
	cout << cnt-1;
}