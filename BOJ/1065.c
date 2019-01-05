#include<stdio.h>

int dn(int i) {
	int num1 = i / 100;
	i %= 100;
	int num2 = i / 10;
	i %= 10;
	int num3 = i;
	if (num1 - num2 == num2 - num3)return 1;
	else return 0;
}

int main()
{
	int n;
	int count = 0;
	scanf("%d", &n);
	if (n < 100)
	{
		printf("%d", n);
	}
	else
	{
		for (int i = 100; i <= n; i++) {
			count += dn(i);
		}
		printf("%d", 99 + count);
	}
}