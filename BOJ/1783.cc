#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	if (n == 1) {
		printf("1");
	}
	else if (n == 2) {
		printf("%d", min(4, (m + 1) / 2));
	}
	else {
		if (m >= 7) {
			printf("%d", m - 2);
		}
		else {
			printf("%d", min(4, m));
		}
	}
}