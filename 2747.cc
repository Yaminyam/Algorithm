#include<iostream>

using namespace std;

int main()
{
	int a;
	int pibo[46];
	pibo[0] = 0;
	pibo[1] = 1;
	for (int i = 2; i < 46; i++)
	{
		pibo[i] = pibo[i - 1] + pibo[i - 2];
	}
	scanf("%d", &a);
	printf("%d", pibo[a]);
}