#include<stdio.h>
#include<string.h>

int main()
{
	int T;
	char input[51];
	int count = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%s", input);
		for (int j = 0; j < strlen(input); j++)
		{
			if (input[j] == '(') count++;
			else if (input[j] == ')') count--;
			if (count < 0) break;
		}
		if (count == 0) printf("YES\n");
		else printf("NO\n");
		count = 0;
	}
}