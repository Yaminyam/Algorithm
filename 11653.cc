#include <stdio.h>

int main()
{
	int n;
	int p = 2;
	scanf("%d", &n);

	while (n != 1)
	{
		if (n%p == 0)
		{
			printf("%d\n", p);
			n /= p;
		}
		else
			p++;
	}

}