#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <bitset>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--) {
		char arr[8][8];
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				if (arr[i][j] == '#' && arr[i + 2][j] == '#' && arr[i][j + 2] == '#' && arr[i + 1][j + 1] == '#' && arr[i + 2][j + 2] == '#') {
					cout << i + 2 << " " << j + 2 << "\n";
				}
			}
		}
	}
}
