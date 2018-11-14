#include<stdio.h>

int main()
{
	int hex[20000];
	for (int i = 0; i < 20000; i++)
	{
		hex[i] = 3 * i*(i - 1) + 1;
	}
	int n;
	scanf("%d", &n);
	for (int i = 1; i < 20000; i++)
	{
		if (n <= hex[i])
		{
			printf("%d", i);
			break;
		}
	}
}