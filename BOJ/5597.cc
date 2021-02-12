#include <stdio.h>

int main()
{
	int count[31] = { 0, };
	int a;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &a);
		count[a]++;
	}
	for (int i = 1; i <= 30; i++) {
		if (count[i] == 0) printf("%d\n", i);
	}
}