#include<stdio.h>

int main()
{
	int c;
	int n;
	double sum = 0;
	double count = 0;
	int input[1000];
	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &input[j]);
			sum += input[j];
		}
		for (int j = 0; j < n; j++)
		{
			if (input[j] > sum / n)count++;
		}
		printf("%.3lf%%\n", count / n * 100);
		sum = 0;
		count = 0;
	}
}