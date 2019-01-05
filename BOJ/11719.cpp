#include<stdio.h>

int main()
{
	char a;
	for (int i = 0; i < 10000; i++)
	{
		a = getchar();
		if (a == EOF)break;
		putchar(a);
	}
}