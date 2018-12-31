#include <stdio.h>
#include <math.h>

int main()
{
	int T;
	int x1;
	int y1;
	int r1;
	int x2;
	int y2;
	int r2;
	double line1;
	double line2;
	double d;
	int *result;

	scanf("%d", &T);
	result = (int*)malloc(sizeof(int)*T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		line1 = x2 - x1;
		line2 = y2 - y1;
		d = sqrt(pow(line1, 2) + pow(line2, 2));
		if (d == 0 && r2 == r1)
		{
			result[i] = -1;
		}
		else if (d == r1 + r2 || d == abs(r1 - r2))
		{
			result[i] = 1;
		}
		else if (d > r1 + r2 || d < abs(r1 - r2) || d == 0)
		{
			result[i] = 0;
		}
		else if (d < r1 + r2 && d > abs(r1 - r2))
		{
			result[i] = 2;
		}
	}

	for (int i = 0; i < T; i++)
	{
		printf("%d\n", result[i]);
	}
	free(result);
}