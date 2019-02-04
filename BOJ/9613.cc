#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	return a % b ? gcd(b, a%b) : b;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long long sum = 0;
		int n;
		int input[101];
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &input[i]);
		}
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				sum += gcd(input[i], input[j]);
			}
		}
		printf("%lld\n", sum);
	}
}