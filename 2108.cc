#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	double sum = 0;
	int count = 0;
	int countmax = 0;
	int countmax2 = 0;
	int countnum;
	int countnum2;
	bool com = false;
	int input[500000];
	cin >> n;
	for (int i = 0; i < n; i++)scanf("%d", &input[i]);
	sort(input, input + n);
	countnum = input[0];
	for (int i = 0; i < n; i++)
	{
		sum += input[i];
		if (input[i] == input[i + 1])count++;
		else count = 0;


		if (count == countmax && com == false && i != 0)
		{
			countnum = input[i];
			com = true;
		}
		if (count > countmax)
		{
			countmax = count;
			countnum = input[i];
			com = false;
		}
	}
	printf("%.0lf\n", sum / n);
	printf("%d\n", input[n / 2]);
	printf("%d\n", countnum);
	printf("%d\n", input[n - 1] - input[0]);
}