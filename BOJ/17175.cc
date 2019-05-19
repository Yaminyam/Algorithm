#include<iostream>

using namespace std;

int main()
{
	int t;
	int a;
	long long p[51];
	p[0] = 1;
	p[1] = 1;
	for (int i = 2; i < 51; i++)
	{
		p[i] = p[i - 1] + p[i - 2] + 1;
	}

	scanf("%d", &a);
	printf("%d", p[a]%1000000007);
}