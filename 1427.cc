#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int input[10];

int main()
{
	int n;
	int count=0;
	scanf("%d", &n);
	while (n / 10 != 0)
	{
		input[count] = n % 10;
		n /= 10;
		count++;
	}
	input[count] = n % 10;
	count++;
	sort(input, input + 10, greater<int>());
	for (int i = 0; i < count; i++)
	{
		printf("%d", input[i]);
	}
}