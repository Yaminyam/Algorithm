#include<stdio.h>

int main()
{
	int n;
	int count[10000] = { 0, };
	int countsum[10000];
	int input;
	int count2 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input);
		count[input]++;
	}
	countsum[0] = count[0];
	for (int i = 1; i <= 10000; i++)
		countsum[i] = count[i] + countsum[i - 1];
	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 0; j < count[i]; j++)
		{
			printf("%d\n", i);
			count2++;
			if (count2 == n)break;
		}
		if (count2 == n)break;
	}
}