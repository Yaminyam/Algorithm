#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <bitset>

using namespace std;

int main()
{
	//3
	//0+1+2, 1+1+1, 
	//13
	//0+4+9, 0+5+8, 0+6+7
	//1+3+9, 1+4+8, 1+5+8, 1+6+7, 2+2+9, 2+3+8,
	//2+4+7, 2+5+6, 3+3+7, 3+4+6, 3+5+5, 4+4+5, 
	//23
	//5+9+9,
	//6+8+9, 7+7+9, 7+8+8
	int t;
	cin >> t;
	while (t--) {
		int n;
		int check[10] = { 0, };
		int ans = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			check[x % 10]++;
		}
		for (int i = 0; i < 10; i++) {
			for (int j = i; j < 10; j++) {
				for (int k = j; k < 10; k++) {
					if (i + j + k == 3 || i + j + k == 13 || i + j + k == 23) {
						check[i]--;
						check[j]--;
						check[k]--;
						int zz = 1;
						for (int z = 0; z < 10; z++) {
							if (check[z] < 0) zz = 0;
						}
						if (zz) ans = 1;
						check[i]++;
						check[j]++;
						check[k]++;
					}
				}
			}
		}
		if (ans) cout << "YES\n";
		else cout << "NO\n";
	}
}
