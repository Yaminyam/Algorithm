#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int dir[4][2] = { { 0,1 },{ -1,0 },{ 0,-1 },{ 1,0 } };
int buffer[500][500];
int main()
{
	int r1, c1, r2, c2;
	cin >> r1 >> c1 >> r2 >> c2;
	int x = 0;
	int y = 0;
	int count = 1;
	int d = 0;
	int num = 1;
	int full = 0;
	bool check = false;

	if (x >= r1 && y >= c1&& x <= r2&& y <= c2)
	{
		buffer[x - r1][y - c1] = 1;
		full++;
	}
	while (1)
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < count; j++)
			{
				x = x + dir[d][0];
				y = y + dir[d][1];
				if (x < r1 || y < c1 || x>r2 || y>c2)
				{
					++num;
				}
				else
				{
					buffer[x - r1][y - c1] = ++num;
					full++;
				}
				if (full == (r2 - r1 + 1)*(c2 - c1 + 1))
				{
					check = true;
					break;
				}
			}
			if (check == true)break;
			d = (d + 1) % 4;
		}
		if (check == true)break;
		count++;
	}
	int a = 0;
	while (num > 0)
	{
		num = num / 10;
		a++;
	}
	for (int i = 0; i <= r2 - r1; i++)
	{
		for (int j = 0; j <= c2 - c1; j++)
		{
			printf("%*d ", a, buffer[i][j]);
		}
		printf("\n");
	}
	return 0;
}