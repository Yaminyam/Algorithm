#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	long long count2=0, count5=0;
	scanf("%d %d", &n, &m);

	for (long long i = 2; i <= n; i *= 2) {
		count2 += n / i;
	}
	for (long long i = 5; i <= n; i *= 5) {
		count5 += n / i;
	}

	for (long long i = 2; i <= m; i *= 2) {
		count2 -= m / i;
	}
	for (long long i = 5; i <= m; i *= 5) {
		count5 -= m / i;
	}

	for (long long i = 2; i <= n-m; i *= 2) {
		count2 -= (n - m) / i;
	}
	for (long long i = 5; i <= n-m; i *= 5) {
		count5 -= (n - m) / i;
	}

	printf("%lld", min(count2, count5));
}