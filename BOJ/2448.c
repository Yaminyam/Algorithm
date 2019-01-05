#include<stdio.h>

int main(x, y, i) {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < (n-i-1)/3*3; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < i / 3 + 1; j++)
		{
			if (n / 3 - i / 3 - 1 & j)printf("      ");
			else
			{
				if (i % 3 == 0)printf("  *   ");
				else if (i % 3 == 1)printf(" * *  ");
				else if (i % 3 == 2)printf("***** ");
			}
		}
		for (int j = 0; j < (n - i - 1) / 3 * 3; j++)
		{
			printf(" ");
		}
		printf("\n");
	}	
}