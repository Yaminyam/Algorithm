#include <stdio.h>

int main()
{
	int N;

	int input[100][10];

	int result[100] = { 0, };

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &input[i][j]);
			if ((j % 5) + 1 == input[i][j])
			{
				result[i] += 1;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		if (result[i] == 10)
		{
			printf("%d\n", i + 1);
		}
	}
	
}