#include<stdio.h>

int main()
{
	int N, X;
	int input[10000];
	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input[i]);
		if (input[i] < X)
		{
			printf("%d ", input[i]);
		}
	}
}