#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	return a%b ? gcd(b, a%b) : b;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a*b/gcd(a, b));
	}
}