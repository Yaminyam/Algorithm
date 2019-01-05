#include<stdio.h>
#include<string.h>

int main()
{
	int n[8];
	int count=0;
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		if (n[i] == i + 1)count++;
		else if (n[i] == 8 - i)count--;
	}
	if (count == 8)printf("ascending");
	else if (count == -8)printf("descending");
	else printf("mixed");
}