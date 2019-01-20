#include<stdio.h>

int main()
{
	int n;
	int map[1000];
	int current = 0;
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &map[i]);
		if (map[i] == current) {
			count++;
			current++;
			if (current == 3)current = 0;
		}
	}
	printf("%d", count);
}