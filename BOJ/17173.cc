#include<iostream>

using namespace std;

int main()
{
	int n, k;
	int num[1001];
	bool check[1001] = { false, };
	int sum = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < k; i++) {
		for (int j = num[i]; j <= n; j += num[i]) {
			check[j] = true;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (check[i])
			sum += i;
	}
	printf("%d", sum);
}