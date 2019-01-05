#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);


	if (a % 5 == 0)
	{
		printf("%d", a / 5);
	}
	else if ((a - 3) % 5 == 0 && (a - 3) >= 0)
	{
		printf("%d", (a - 3) / 5 + 1);
	}
	else if ((a - 6) % 5 == 0 && (a - 6) >= 0)
	{
		printf("%d", (a - 6) / 5 + 2);
	}
	else if ((a - 9) % 5 == 0 && (a - 9) >= 0)
	{
		printf("%d", (a - 9) / 5 + 3);
	}
	else if ((a - 12) % 5 == 0 && (a - 12) >= 0)
	{
		printf("%d", (a - 12) / 5 + 4);
	}
	else
	{
		printf("-1");
	}
}