#include <stdio.h>

int main()
{
	int n;
	int count = 0;
	int t;
	int sum = 0;
	int server[50];

	scanf("%d %d", &n, &t);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &server[i]);
	}

	for (int i = 0; i < n; i++)
	{
		sum += server[i];
		if (sum > t)
		{
			break;
		}
		count++;
	}

	printf("%d", count);
}