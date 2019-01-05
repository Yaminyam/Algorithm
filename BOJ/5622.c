#include<stdio.h>
#include<string.h>

int main()
{
	char input[16];

	int sum = 0;

	scanf("%s", &input);

	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] - 'A' >= 18 && input[i] - 'A' <=21)
		{
			sum += (input[i] - 'A' - 1) / 3 + 3;
		}
		else if (input[i] - 'A' >= 24 && input[i] - 'A' <= 25)
		{
			sum += (input[i] - 'A' - 2) / 3 + 3;
		}
		else
		{
			sum += (input[i] - 'A') / 3 + 3;
		}
	}
	printf("%d", sum);
}