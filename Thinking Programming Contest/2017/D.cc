#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int H, W;
	int block[500];
	int sum = 0;
	scanf("%d %d", &H, &W);
	for (int i = 0; i < W; i++)
	{
		scanf("%d", &block[i]);
	}
	for (int i = H; i > 0; i--)
	{
		vector<int> high;
		int temp = -1;
		for (int j = 0; j < W; j++)
		{
			if (block[j] >= i && temp != -1) {
				sum += j - temp - 1;
				temp = j;
			}
			else if(block[j] >= i)
				temp = j;
		}
	}
	printf("%d", sum);
}