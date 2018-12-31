#include <stdio.h>

int main()
{
	int x;
	int y;
	int w;
	int h;
	int result;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	result = w - x;

	if (x < result)
	{
		result = x;
	}
	if ((h - y) < result)
	{
		result = h - y;
	}
	if (y < result)
	{
		result = y;
	}

	printf("%d", result);
}