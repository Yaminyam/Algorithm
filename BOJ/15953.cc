#include<stdio.h>

int main()
{
	int	n;

	int a, b;

	int result[1000] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);

		if (a == 0) result[i] += 0;
		else if (a <= 1) result[i] += 5000000;
		else if (a <= 3) result[i] += 3000000;
		else if (a <= 6) result[i] += 2000000;
		else if (a <= 10) result[i] += 500000;
		else if (a <= 15) result[i] += 300000;
		else if (a <= 21) result[i] += 100000;

		if (b == 0) result[i] += 0;
		else if (b <= 1) result[i] += 5120000;
		else if (b <= 3) result[i] += 2560000;
		else if (b <= 7) result[i] += 1280000;
		else if (b <= 15) result[i] += 640000;
		else if (b <= 31) result[i] += 320000;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", result[i]);
	}
}