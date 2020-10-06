#include <stdio.h>

int main()
{
	int n;
	int a;
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		if (a == n) count++;
	}
	printf("%d", count);
}