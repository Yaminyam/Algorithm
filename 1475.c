#include<stdio.h>
#include<string.h>

int main()
{
	char n[8];
	int count[10] = { 0, };
	int max = 0;
	scanf("%s", &n);
	for (int i = 0; i < strlen(n); i++)
	{
		count[n[i] - '0']++;
		if (count[n[i] - '0'] > max && n[i] != '6' && n[i] != '9')max = count[n[i] - '0'];
	}
	if ((count[6] + count[9] + 1) / 2 > max)max = (count[6] + count[9] + 1) / 2;
	printf("%d", max);
	
}