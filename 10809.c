#include<stdio.h>
#include<string.h>

int main()
{
	char c[100];
	int a[26];
	scanf("%s", &c);
	for (int i = 0; i < 26; i++)
	{
		a[i] = -1;
	}
	for (int i = strlen(c) - 1; i >= 0; i--)
	{
		a[c[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", a[i]);
	}
	
}