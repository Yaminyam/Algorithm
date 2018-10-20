#include<stdio.h>

int main()
{
	int n;
	double input[1000];
	double sum = 0;
	double max = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &input[i]);
		if (input[i] > max)max = input[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += input[i] / max * 100;
	}
	printf("%lf", sum / n);
}