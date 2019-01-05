#include <stdio.h>

int main()
{
	int a;

	int num1;
	int num2;
	int num3;

	int max1;
	int max2 = 0;

	scanf("%d %d %d", &num1, &num2, &num3);

	max1 = num1;
	if (max1 < num2)
	{
		max1 = num2;
		max2 = (num1 < num3) ? num3 : num1;
	}
	if (max1 < num3)
	{
		max1 = num3;
		max2 = (num1 < num2) ? num2 : num1;
	}
	if(max2 == 0)
	{
		max2 = (num2 < num3) ? num3 : num2;
	}
	printf("%d", max2);


}