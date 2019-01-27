#include<stdio.h>

int main()
{
	int t;
	while (1)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)return 0;
		printf("%d\n", a + b);
	}
}