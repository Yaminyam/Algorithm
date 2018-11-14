#include<stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	for (int j = 0; j < num; j++)
	{
		int a, b;
		double i;
		scanf("%d %d", &a, &b);
		int n = b - a;
		for (i = 1; n > i*(i + 1); i++);
		i--;
		if (n > i*(i + 1) + i + 1)printf("%.0lf\n", i * 2 + 2);
		else printf("%.0lf\n", i * 2 + 1);
	}
}