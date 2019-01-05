#include<stdio.h>
#include<string.h>

int main()
{
	char input[101];

	scanf("%s", &input);

	int count = strlen(input);

	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == 'j')
		{
			if (input[i - 1] == 'l' || input[i - 1] == 'n')count--;
		}
		else if (input[i] == '=')
		{
			if (input[i - 1] == 'c' || input[i - 1] == 's')count--;
			else if (input[i - 1] == 'z')
			{
				if (input[i - 2] == 'd')count -= 2;
				else count--;
			}
		}
		else if (input[i] == '-')
		{
			if (input[i - 1] == 'c' || input[i - 1] == 'd')count--;
		}
	}
	printf("%d", count);
}