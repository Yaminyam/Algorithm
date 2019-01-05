#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	int i = 2;
	int prime = 1;
	int count[10000] = { 0, };
	int numcount = 0;

	while (1)
	{
		scanf("%d", &a);
		if (a == 0)
			break;
		numcount++;
		for (int i = a + 1; i <= a * 2; i++)
		{
			prime = 1;
			for (int n = 2; n<=sqrt(i); n++)
			{
				if (i % n == 0)
				{
					prime = 0;
					break;
				}
			}
			if (prime == 1)
			{
				count[numcount-1]++;
			}
		}
	}

	for (int i = 0; i < numcount; i++)
	{
		printf("%d\n", count[i]);
	}
	
}