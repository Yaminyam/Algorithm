#include<iostream>
#include<math.h>

using namespace std;

void solve13(int n);
void solve23(int n);
void solve12(int n);
void solve21(int n);
void solve32(int n);
void solve31(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", (int)pow(2, n)-1);
	solve13(n);
	
}

void solve13(int n)
{
	if (n == 1)
		printf("1 3\n");
	else if (n > 1) {
		solve12(n - 1);
		printf("1 3\n");
		solve23(n - 1);
	}
}

void solve23(int n)
{
	if (n == 1)
		printf("2 3\n");
	else if (n > 1) {
		solve21(n - 1);
		printf("2 3\n");
		solve13(n - 1);
	}
}

void solve12(int n)
{
	if (n == 1)
		printf("1 2\n");
	else if (n > 1) {
		solve13(n - 1);
		printf("1 2\n");
		solve32(n - 1);
	}
}

void solve21(int n)
{
	if (n == 1)
		printf("2 1\n");
	else if (n > 1) {
		solve23(n - 1);
		printf("2 1\n");
		solve31(n - 1);
	}
}

void solve32(int n)
{
	if (n == 1)
		printf("3 2\n");
	else if (n > 1) {
		solve31(n - 1);
		printf("3 2\n");
		solve12(n - 1);
	}
}

void solve31(int n)
{
	if (n == 1)
		printf("3 1\n");
	else if (n > 1) {
		solve32(n - 1);
		printf("3 1\n");
		solve21(n - 1);
	}
}