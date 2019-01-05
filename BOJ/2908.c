#include<stdio.h>

int main()
{
	char a[4], b[4];

	char result[4];

	scanf("%s %s", &a, &b);
	result[3] = '\0';
	if (a[2] > b[2])
	{
		result[0] = a[2];
		result[1] = a[1];
		result[2] = a[0];
	}
	else if (a[2] == b[2])
	{
		result[0] = a[2];
		if (a[1] > b[1])
		{
			result[1] = a[1];
			result[2] = a[0];
			result[3] = '\0';
		}
		else if (a[1] == b[1])
		{
			result[1] = a[1];
			if (a[0] > b[0])
			{
				result[2] = a[0];
			}
			else
			{
				result[2] = b[0];
			}
		}
		else
		{
			result[1] = b[1];
			result[2] = b[0];
		}
	}
	else
	{
		result[0] = b[2];
		result[1] = b[1];
		result[2] = b[0];
	}

	printf("%s", result);
}