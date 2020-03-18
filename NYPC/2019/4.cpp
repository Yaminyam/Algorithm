#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>

using namespace std;

int main() {
	int n;
	int k;
	int map[1000][1000] = { 0, };
	int mode = 1;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			map[i][j] = -1;
		}
	}
	int count = 0;
	int prex = 0;
	int prey = 0;
	int x = 0;
	int y = 0;
	while (count != k) {
		if (mode == 1) {
			map[x][y] = ++count;
			if (map[x][y + 1] != -1) {
				mode++;
				prey = y;
				prex = x++;
			}
			else y++;
		}
		else if (mode == 2) {
			map[x][y] = ++count;
			if (map[x + 1][y] != -1) {
				mode++;
				prex = x;
				prey = y--;
			}
			else x++;
		}
		else if (mode == 3) {
			map[x][y] = ++count;
			if (map[x][y - 1] != -1) {
				mode++;
				prey = y;
				prex = x--;
			}
			else y--;
		}
		else if (mode == 4) {
			map[x][y] = ++count;
			if (map[x - 1][y] != -1) {
				mode = 1;
				prex = x;
				prey = y++;
			}
			else x--;
		}
	}

	printf("%d %d", prey+1, prex+1);
}
