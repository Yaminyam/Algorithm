#include<iostream>

using namespace std;

int main()
{
	int n;
	int sum = 1;
	scanf("%d", &n);
	n /= 3;
	n -= 3;
	//3Hn = 3+n-1Cn;
	
	for (int i = 3 + n - 1; i >= 3 + n - 2; i--) {
		sum *= i;
	}
	for (int i = 1; i <= 2; i++) {
		sum /= i;
	}
	printf("%d", sum);
}