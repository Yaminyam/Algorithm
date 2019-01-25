#include<stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 1; i < 10000; i++) {
		if (i % 15 == a || (a == 15 && i % 15 == 0))
			if (i % 28 == b || (b == 28 && i % 28 == 0))
				if (i % 19 == c || (c == 19 && i % 19 == 0)) {
					printf("%d", i);
					break;
				}
				else continue;
			else continue;
		else continue;
	}
}