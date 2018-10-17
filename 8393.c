#include<stdio.h>

int main()
{
	int a;
	int sum=0;
	scanf("%d",&a);

	for (int i = 0; i < a; i++)
	{
		sum += i+1;
	}
	printf("%d", sum);

}