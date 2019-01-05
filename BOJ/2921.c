#include <stdio.h>

int func(a);

int main()
{
	int n;
	int sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum += func(i);
	}

	printf("%d", sum);
}

int func(a)
{
	int sum = 0;
	for (int i = a; i <= a * 2; i++)
	{
		sum += i;
	}
	return sum;
}