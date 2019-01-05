#include<stdio.h>

int main()
{
	char n[3];
	char n2[3];
	int count = 0;
	scanf("%s", &n);
	if (n[1] == '\0')
	{
		n[1] = n[0];
		n[0] = '0';
	}
	n2[0] = n[0];
	n2[1] = n[1];
	while (1)
	{
		if (n2[0] + n2[1] - '0' > 57)n2[2] = n2[0] + n2[1] - '0' - 10;
		else n2[2] = n2[0] + n2[1] - '0';
		n2[0] = n2[1];
		n2[1] = n2[2];
		count++;
		if (n[0] == n2[0] && n[1] == n2[1])break;
	}
	printf("%d", count);
}