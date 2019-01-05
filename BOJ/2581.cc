#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a;
	long sum = 0;
	bool num = false;
	bool check = false;
	int checknum = -1;
	int count = 0;

	int n;
	int n2;
	scanf("%d", &n);
	scanf("%d", &n2);
	for (int i = n; i <= n2; i++)
	{
		if (i == 1)num = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if ((i % j) == 0)
			{
				num = true;
				break;
			}
		}
		if (num == false)
		{
			sum += i;
			if (check == false)
			{
				checknum = i;
				check = true;
			}
		}
		else num = false;
	}
	if (sum == 0)printf("-1");
	else printf("%d\n%d", sum, checknum);
}