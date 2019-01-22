#include<iostream>

using namespace std;

int divn(int low, int high);

long long input;
int result;
long long time;
long long dat[200000];
int n, m;
int sum = 0;

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &input);
		sum += input;
		dat[i] = sum;
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%lld", &time);
		printf("%d\n", divn(0,n-1));
	}

}

int divn(int low, int high)
{
	int mid;
	if (low > high)return low;
	else {
		mid = (low + high) / 2;
		if (time == dat[mid])
			return mid + 1;
		else if (time < dat[mid])
			return divn(low, mid - 1);
		else if (time > dat[mid])
			return divn(mid + 1, high);
	}
}