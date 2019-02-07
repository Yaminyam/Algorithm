#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a;
	long sum = 0;
	bool num = false;

	int n;
	int n2;
	scanf("%d", &n);
	scanf("%d", &n2);
	for (int i = n; i <= n2; i++)
	{
		if (i == 1)num = true;
		int squre = sqrt(i);
		for (int j = 2; j <= squre; j++) {
			if ((i % j) == 0)
			{
				num = true;
				break;
			}
		}
		if (num == false)printf("%d\n", i);
		else num = false;
	}
}