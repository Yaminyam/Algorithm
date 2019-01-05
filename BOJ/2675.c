#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	int a;
	char input[20];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		scanf("%s", &input);
		for (int j = 0; j < strlen(input); j++)
		{
			for (int k = 0; k < a; k++)
			{
				printf("%c", input[j]);
			}
		}
		printf("\n");
	}
}