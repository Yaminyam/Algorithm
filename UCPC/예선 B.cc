#include <stdio.h>

int main()
{
	int n, m;

	long long array[1001];

	long long sum = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &array[i]);
	}

	for (int i = 0; i < m; i++)
	{
		long long min1 = array[0];
		int index1 = 0;
		int index2 = 0;
		for (int i = 0; i < n; i++)
		{
			if (array[i] <= min1)
			{
				min1 = array[i];
				index1 = i;
			}
		}
		long long min2;
		for (int i = 0; i < n; i++)
		{
			if (i != index1)
			{
				min2 = array[i];
				break;
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (array[i] <= min2 && i != index1)
			{
				min2 = array[i];
				index2 = i;
			}
		}

		array[index1] = min1 + min2;
		array[index2] = min1 + min2;
	}

	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}

	printf("%lld", sum);

}