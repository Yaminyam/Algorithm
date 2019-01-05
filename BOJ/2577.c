#include<stdio.h>

int main()
{
	int a, b, c;
	int n;
	int num[10] = { 0, };
	scanf("%d %d %d", &a, &b, &c);
	n = a*b*c;
	for (int i = 0; i < 9; i++)
	{
		num[n % 10]++;
		n /= 10;
		if (n == 0)break;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}
}