#include<iostream>
#include<cmath>

using namespace std;

int A, P;
int arr[1000000];

int length() {
	for (int i = 1; i < 1000000; i++) {
		int sum = 0;
		int n = arr[i - 1];
		while (n != 0) {
			sum += pow(n % 10, P);
			n /= 10;
		}
		arr[i] = sum;
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] == arr[i]) {
				return j;
			}
		}
	}
}

int main()
{
	scanf("%d %d", &A, &P);
	arr[0] = A;
	printf("%d", length());
}
