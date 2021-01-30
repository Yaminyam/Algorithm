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
	int map[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> map[i][j];
		}
	}

	int sum = 0;
	for (int i = 0; i < 3; i++) {
		if (map[i][0] && map[i][1] && map[i][2]) {
			sum = map[i][0] + map[i][1] + map[i][2];
		}
	}
	for (int i = 0; i < 3; i++) {
		if (map[0][i] && map[1][i] && map[2][i]) {
			sum = map[0][i] + map[1][i] + map[2][i];
		}
	}
	if (map[0][0] && map[1][1] && map[2][2]) {
		sum = map[0][0] + map[1][1] + map[2][2];
	}
	if (map[0][2] && map[1][1] && map[2][0]) {
		sum = map[0][2] + map[1][1] + map[2][0];
	}
	if (map[0][0] && map[2][2]) {
		sum = (map[0][0] + map[2][2]) * 3 / 2;
	}
	if (map[0][2] && map[2][0]) {
		sum = (map[0][2] + map[2][0]) * 3 / 2;
	}
	int t = 2;
	while (t--) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (map[i][j] == 0) {
					int width = 0;
					int sumwidth = 0;
					int depth = 0;
					int sumdepth = 0;
					for (int k = 0; k < 3; k++) {
						if (map[k][j]) {
							depth++;
							sumdepth += map[k][j];
						}
						if (map[i][k]) {
							width++;
							sumwidth += map[i][k];
						}
					}

					if (width == 2) {
						map[i][j] = sum - sumwidth;
					}
					if (depth == 2) {
						map[i][j] = sum - sumdepth;
					}


				}
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}
}