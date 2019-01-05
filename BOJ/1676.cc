#include <iostream>
using namespace std;

int main() {
	long long n, r, p;
	cin >> n;
	int count1 = 0;
	int count2 = 0;
	long long t1 = 1;
	for (long long i = 1; i <= n; i++) {
		int a = i;
		while (a % 5 == 0)
		{
			if (a % 5 == 0)
			{
				count2++;
				a /= 5;
			}
		}
	}
	cout << count2 << '\n';
	return 0;
}