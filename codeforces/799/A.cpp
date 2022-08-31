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
	for (int i = 0; i < n; i++) {
		int a;
		int ans = 0;
		cin >> a;
		for (int j = 0; j < 3; j++) {
			int x;
			cin >> x;
			if (x > a) ans++;
		}
		cout << ans << "\n";
	}
}
