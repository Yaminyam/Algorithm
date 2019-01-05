#include <stdio.h>

int main()
{
	int n;
	int a[1000];
	int temp;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
}