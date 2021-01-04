#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int d[1000];
	int a[1000];
	int n;
	int result = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		d[i] = a[i];
		for (int j = 0; j < i; j++) {
			if (a[j] > a[i] && d[i] < d[j] + a[i]) {
				d[i] = d[j] + a[i];
			}
		}
		result = max(result, d[i]);
	}
	printf("%d", result);
}