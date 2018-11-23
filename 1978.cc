#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a;
	long sum = 0;
	bool num = false;
	int count = 0;

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a == 1)num = true;
		for (int j = 2; j <= sqrt(a); j++) {
			if ((a % j) == 0)
			{
				num = true;
				break;
			}
		}
		if (num == false)count++;
		else num = false;
	}
	printf("%d", count);
}