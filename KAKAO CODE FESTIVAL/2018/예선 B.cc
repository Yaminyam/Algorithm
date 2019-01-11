#include <stdio.h>
#include <math.h>

int main()
{
	int N, K;

	double m, var = 0;

	double result;

	int count = 0;

	int input[500];

	scanf("%d %d", &N, &K);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input[i]);
	}
	while (K <= N)
	{
		for (int i = 0; i < N - K + 1; i++)
		{
			m = 0;
			for (int j = i; j < i + K; j++)
			{
				m += input[j];
			}
			m /= K;
			var = 0;
			for (int j = i; j < i + K; j++)
			{
				var += (input[j] - m) * (input[j] - m);
			}
			var /= K;
			if (count == 0)
			{
				result = var;
				count = 1;
			}
			else if(var < result) result = var;
		}
		K++;
	}
	printf("%.11lf ", sqrt(result));
}