#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int d[1000];
	int d2[1000];
	int a[1000];
	int n;
	int result = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		d[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i] && d[i] < d[j] + 1) {
				d[i] = d[j] + 1;
			}
		}
	}
	for (int i = n-1; i >= 0; i--) {
		d2[i] = 1;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[i] && d2[i] < d2[j] + 1) {
				d2[i] = d2[j] + 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		result = max(d[i] + d2[i] - 1, result);
	}
	printf("%d", result);
}