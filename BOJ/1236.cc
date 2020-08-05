#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstdio>
#include<string>

using namespace std;
const int INF = numeric_limits<int>::max();

char map[51][51];
int checki[51];
int checkj[51];

int main()
{
	int ansi = 0;
	int ansj = 0;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'X') {
				checkj[j] = true;
				checki[i] = true;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (!checki[i])ansi++;
	}
	for (int j = 0; j < m; j++) {
		if (!checkj[j])ansj++;
	}
	int ans = max(ansi, ansj);

	cout << ans;
}