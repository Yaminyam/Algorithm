#include <stdio.h>

int main()
{
	int a[10];
	int max;
	int num;
	
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}

	max = a[0];
	num = 1;
	for (int i = 1; i < 9; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			num = i + 1;
		}
	}

	printf("%d\n%d", max, num);

}