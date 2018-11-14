#include<stdio.h>

int main()
{
	int n;
	int i;
	scanf("%d", &n);
	for (i = 1; n > i*(i + 1) / 2; i++);
	if (i % 2 == 1) printf("%d/%d", i*(i + 1) / 2 - n + 1, i - (i*(i + 1) / 2 - n));
	else printf("%d/%d", i - (i*(i + 1) / 2 - n), i*(i + 1) / 2 - n + 1);
}