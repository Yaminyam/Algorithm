#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int selec[10];
vector<int> input;
vector<int> V;
int n, m;

void dfs(int idx, int cnt)
{
	if (cnt == m) {
		for (int i = 0; i < V.size(); i++) {
			cout << V[i] << " ";
		}
		cout << "\n";
		return;
	}

	int before = -1;
	for (int i = idx; i < n; i++) {
		//if (selec[i] == true)continue;
		if (before == input[i])continue;
		before = input[i];
		selec[i] = true;
		V.push_back(input[i]);
		dfs(i, cnt + 1);
		V.pop_back();
		selec[i] = false;
	}

}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		input.push_back(x);
	}
	sort(input.begin(), input.end());
	dfs(0, 0);
}