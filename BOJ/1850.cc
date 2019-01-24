#include<iostream>

using namespace std;

long long gcd(long long a, long long b)
{
	return a%b ? gcd(b, a%b) : b;
}

int main()
{
	long long a, b;
	scanf("%lld %lld", &a, &b);
	for (int i = 0; i < gcd(a, b); i++)
		printf("1");
}