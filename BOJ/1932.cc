#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int input[500][500];
	int data[500][500];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
			scanf("%d", &input[i][j]);
	data[0][0] = input[0][0];
	for (int i = 1; i < n; i++)
		for (int j = 0; j <= i; j++)
			if (j == 0)
				data[i][j] = data[i - 1][j] + input[i][j];
			else if (j == i)
				data[i][j] = data[i - 1][j - 1] + input[i][j];
			else
				data[i][j] = max(data[i - 1][j - 1], data[i - 1][j]) + input[i][j];
	int maxnum=0;
	for (int i = 0; i < n; i++)
		maxnum = max(maxnum, data[n-1][i]);
	printf("%d", maxnum);
}