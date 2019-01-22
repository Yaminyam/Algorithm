#include<iostream>

int main()
{
	long long sum = 0;
	int n;
	int a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			scanf("%d", &a);
			sum += a;
		}
	printf("%lld", sum);
}