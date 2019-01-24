#include<iostream>

using namespace std;

int gcd(long long a, long long b)
{
	return a%b ? gcd(b, a%b) : b;
}

int main()
{
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n", a*b / gcd(a, b));
}