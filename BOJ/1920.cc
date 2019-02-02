#include<iostream>
#include<algorithm>

using namespace std;

int divn(int low, int high);

long long time;
long long dat[100000];
int n, m;

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &dat[i]);
	}
	sort(dat, dat + n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%lld", &time);
		printf("%d\n", divn(0, n - 1));
	}
}

int divn(int low, int high)
{
	int mid;
	if (low > high)return 0;
	else {
		mid = (low + high) / 2;
		if (time == dat[mid])
			return 1;
		else if (time < dat[mid])
			return divn(low, mid - 1);
		else if (time > dat[mid])
			return divn(mid + 1, high);
	}
}