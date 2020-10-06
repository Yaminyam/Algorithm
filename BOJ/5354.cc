#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		if (n == 1) {
			printf("#");
			printf("\n\n");
			continue;
		}
		for (int i = 0; i < n; i++) {
			printf("#");
		}
		printf("\n");
		for (int i = 0; i < n - 2; i++) {
			printf("#");
			for (int j = 0; j < n - 2; j++) {
				printf("J");
			}
			printf("#\n");
		}
		for (int i = 0; i < n; i++) {
			printf("#");
		}
		printf("\n\n");
	}
}