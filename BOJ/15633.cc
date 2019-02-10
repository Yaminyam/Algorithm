#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int n;
	long long result = 0;
	scanf("%d", &n);
	double lim = sqrt(n);
	for (int i = 1; i <= lim; i++) {
		if (i == lim) {
			result += i;
		}
		else if (n%i == 0) {
			result += n / i;
			result += i;
		}
	}
	result = result * 5 - 24;
	printf("%lld", result);
}