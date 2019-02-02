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
		d[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[j] > a[i] && d[i] < d[j] + 1) {
				d[i] = d[j] + 1;
			}
		}
		result = max(result, d[i]);
	}
	printf("%d", result);
}