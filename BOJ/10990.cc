#include<iostream>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		printf("*");
		if (i == 1) {
			printf("\n");
			continue;
		}
		for (int j = 0; j < (i - 1) * 2 - 1; j++) {
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
}