#include<iostream>

using namespace std;

int main()
{
	int a[100][100];
	int b[100][100];
	int result[100][100] = { 0, };
	int n, m, k;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	scanf("%d %d", &m, &k);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < k; j++)
			scanf("%d", &b[i][j]);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int l = 0; l < m; l++) {
				result[i][j] += a[i][l] * b[l][j];
			}
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

}