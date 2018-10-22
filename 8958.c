#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d", &n);
	char a[80];
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		int sum = 0;
		scanf("%s", a);
		int k = strlen(a);
		for (int j = 0; j < k; j++)
		{
			if (a[j] == 'O')
			{
				count++;
				sum += count;
			}
			else count = 0;
		}
		printf("%d\n", sum);
	}
}