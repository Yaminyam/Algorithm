#include<stdio.h>

int main()
{
	int n;
	int input[1000000];
	int min = 1000000;
	int max = -1000000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input[i]);
		if (input[i] > max)max = input[i];
		if (input[i] < min)min = input[i];
	}
	printf("%d %d", min, max);
}