#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int input[300];
	int data[300][2];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &input[i]);
	data[0][0] = input[0];
	data[0][1] = input[0];
	data[1][0] = input[0] + input[1];
	data[1][1] = input[1];
	for (int i = 2; i < n; i++)
	{
		data[i][0] = data[i - 1][1] + input[i];
		data[i][1] = max(data[i - 2][0], data[i - 2][1]) + input[i];
	}
	printf("%d", max(data[n - 1][0], data[n - 1][1]));
}