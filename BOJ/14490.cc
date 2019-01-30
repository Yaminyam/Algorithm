#include<iostream>

using namespace std;

int gcd(int a, int b)
{
	return a % b ? gcd(b, a%b) : b;
}

int main()
{
	int a, b;
	scanf("%d:%d", &a, &b);
	printf("%d:%d",a/gcd(a, b),b/gcd(a,b));
}