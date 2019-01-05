#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	char a[101];
	int count2 = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", a);
		int count[26] = { 0, };
		for (int j = 0; j < strlen(a); j++)
		{
			if (a[j - 1] != a[j]) count[a[j] - 'a']++;
		}
		for (int j = 0; j < 26; j++)
		{
			if (count[j] > 1)
			{
				count2++;
				break;
			}
		}
	}
	printf("%d", n - count2);
}