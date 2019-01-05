#include<stdio.h>

int main()
{
	int a;
	char b[100];
	int sum = 0;
	scanf("%d", &a);
	scanf("%s", &b);
	for (int i = 0; i < a; i++)
	{
		sum += b[i] - '0';
	}
	printf("%d", sum);
}