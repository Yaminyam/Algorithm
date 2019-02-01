#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	int a, b;
	scanf("%d", &t);
	int count = 0;
	while (t--) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", ++count, a, b, a + b);
	}
}