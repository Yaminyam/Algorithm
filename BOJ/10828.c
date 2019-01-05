#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	int a;
	char control[6];
	int count = 0;
	int data[10000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", control);
		if (!strcmp(control, "push"))
		{
			scanf("%d", &a);
			data[count] = a;
			count++;
		}
		else if (!strcmp(control, "pop"))
		{
			if (count == 0)printf("-1\n");
			else
			{
				printf("%d\n", data[count-1]);
				data[count] = 0;
				count--;
			}
		}
		else if (!strcmp(control, "size"))
		{
			printf("%d\n", count);
		}
		else if (!strcmp(control, "empty"))
		{
			if (count == 0)printf("1\n");
			else printf("0\n");
		}
		else if (!strcmp(control, "top"))
		{
			if (count == 0)printf("-1\n");
			else printf("%d\n", data[count-1]);
		}
	}
}