#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, m, k;
	int team;
	int num = 0;
	scanf("%d %d %d", &n, &m, &k);
	team = min(n / 2, m);
	num += n - team * 2;
	num += m - team;
	if (num < k) {
		k -= num;
		team -= k / 3;
		if (k % 3 != 0)
			team -= 1;
	}
	printf("%d", team);
}