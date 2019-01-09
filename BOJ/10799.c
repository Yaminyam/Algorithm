#include<stdio.h>
#include<string.h>

int main()
{
	char input[100001];
	int count = 0;
	int sum = 0;
	scanf("%s", input);
	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == '(') count++;
		if (input[i] == ')')
		{
			count--;
			if (input[i - 1] == '(')sum += count;
			else
			{
				sum++;
			}
		}
	}
	printf("%d", sum);
}