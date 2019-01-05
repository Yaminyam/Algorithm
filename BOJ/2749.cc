#include<iostream>

using namespace std;

int main()
{
	long long a;
	int pibo[1500000];
	pibo[0] = 0;
	pibo[1] = 1;
	for (int i = 2; i < 1500000; i++)
	{
		pibo[i] = pibo[i - 1] + pibo[i - 2];
		pibo[i] %= 1000000;
	}
	scanf("%lld", &a);
	printf("%d", pibo[a%1500000]);
}