#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a%b);
}

int main()
{
	int n, s;
	cin >> n >> s;
	int arr[100000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int ans = gcd(abs(arr[0] - s), abs(arr[1] - s));
	for (int i = 2; i < n; i++) {
		ans = gcd(ans, abs(arr[i] - s));
	}
	if (n == 1) {
		ans = abs(arr[0] - s);
	}
	cout << ans;
}