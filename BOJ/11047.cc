#include<iostream>

using namespace std;

int main()
{
	int n, k;
	int input[10];
	int check = 0;
	int count = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
	}
	for(int i=n-1; i>=0; i--) {
		count += k / input[i];
		k %= input[i];
	}
	printf("%d", count);
}