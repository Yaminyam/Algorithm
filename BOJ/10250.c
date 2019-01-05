#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int H, W, N;
		scanf("%d %d %d", &H, &W, &N);
		printf("%d%02d\n", (N-1)%H+1, (N-1) / H + 1);
	}
}