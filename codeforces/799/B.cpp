#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <bitset>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		int arr[10002] = { 0, };
		cin >> n;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			arr[x]++;
		}
		int odd = 0;
		int even = 0;
		for (int i = 1; i <= 10000; i++) {
			if (arr[i] % 2) odd++;
			else if (arr[i]) even++;
		}
		int ans = odd + even;
		if (even % 2)ans--;
		cout << ans << "\n";
	}
}
