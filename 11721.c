#include<stdio.h>
#include<math.h>

int main()
{
	int count = 0;
	int count2 = 0;
	char a[101] = {""};
	scanf("%s", a);
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == '\0')break;
		count++;
	}
	for (int i = 0; i < count / 10 + 1; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%c", a[i * 10 + j]);
			count2++;
			if (count2 == count)break;
		}
		if (count2 == count)break;
		printf("\n");
	}
}