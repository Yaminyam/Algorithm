#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	n -= 1;
	int y, m, d;
	y = 2014;
	m = 4;
	d = 2;
	while (n) {
		d++;
		if ((m == 1 || m == 3 || m == 5 || m == 7 ||
			m == 8 || m == 10 || m == 12) && d > 31) {
			m++;
			d = 1;
		} else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
			m++;
			d = 1;
		} else if (m == 2 && d > 29 && (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))) {
			m++;
			d = 1;
		} else if (m == 2 && d > 28 && !(y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))) {
			m++;
			d = 1;
		}

		if (m > 12) {
			y++;
			m = 1;
		}
		n--;
	}
	printf("%d-%02d-%02d", y, m, d);
}