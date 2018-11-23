#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	int a;
	int prime[10001];
	int count = 0;
	bool num = false;
	bool check = false;

	for (int i = 2; i <= 10000; i++)
	{
		if (i == 1)num = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if ((i % j) == 0)
			{
				num = true;
				break;
			}
		}
		if (num == false)prime[count++] = i;
		else num = false;
	}

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		check = false;
		scanf("%d", &a);
		for (int j = a / 2; j > 1; j--)
		{
			for (int k = 0; prime[k] <= j; k++)
			{
				if (prime[k] == j)
				{
					for (int l = 0; prime[l] <= a - j; l++)
					{
						if (prime[l] == a - j)
						{
							printf("%d %d\n", j, a - j);
							check = true;
							break;
						}
					}
				}
				if (check == true)break;
			}
		}
	}
}