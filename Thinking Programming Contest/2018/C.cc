#include<stdio.h>

int main() {
	int n = 1;
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
		n *= 2;

	for (int i = n-1; i >= 0; i--)
	{
		for (int j = 0; j < i / 4 + 1; j++)
		{
			if (n / 4 - i / 4 - 1 & j)printf("    ");
			else
			{
				if (i % 4 == 0 && j == 0)printf("*");
				else if (i % 4 == 0)printf("   *");
				else if (i % 4 == 1 && j == 0)printf("**");
				else if (i % 4 == 1)printf("  **");
				else if (i % 4 == 2 && j == 0)printf("* *");
				else if (i % 4 == 2)printf(" * *");
				else if (i % 4 == 3)printf("****");
			}
		}
		printf("\n");
	}
}