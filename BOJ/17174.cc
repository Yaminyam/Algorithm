#include<iostream>

using namespace std;

int main()
{
	int n, m;
	int sum=0;
	scanf("%d %d", &n, &m);
	while (n > 0) {
		sum += n;
		n /= m;
	}
	printf("%d", sum);
}