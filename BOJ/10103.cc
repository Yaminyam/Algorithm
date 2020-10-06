#include <stdio.h>

int main()
{
	int n;
	int counta = 100; 
	int countb = 100;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a > b) countb -= a;
		else if (b > a)counta -= b;
	}
	printf("%d\n%d", counta, countb);
}