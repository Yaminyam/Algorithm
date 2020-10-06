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

int selec[16];
vector<int> map[16];
vector<int> V;
vector<int> ansV;
int sum = 0;
int ans = INF;
int n;

void dfs(int idx, int cnt, int start)
{
	if (cnt == n && map[idx][start]) {
		sum += map[idx][start];
		if (sum < ans) {
			ans = sum;
			ansV = V;
			
		}
		sum -= map[idx][start];
		return;
	}

	for (int i = 0; i < n; i++) {
		if (selec[i] == true || map[idx][i] == 0)continue;
		selec[i] = true;
		sum += map[idx][i];
		V.push_back(i + 1);
		dfs(i, cnt + 1, start);
		selec[i] = false;
		sum -= map[idx][i];
		V.pop_back();
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			map[i].push_back(x);
		}
	}
	for (int i = 0; i < n; i++) {
		selec[i] = true;
		dfs(i, 1, i);
		selec[i] = false;
	}
	cout << ans << "\n";

}