#include <stdio.h>

int main()
{
	double	sum = 0;
	int		i = 1;
	double	per;
	int		min;
	int a,b,c;
	scanf("%d %d",&a, &b, &c);
	per = b * 0.01;
	c = c * 0.01;

	while (1)
	{
		sum += per * (1 + c) * (i * a);
		i++;
		per *= (1 - c);
		if (per >= 100) break;
	}
	printf("%lf", sum);
}
