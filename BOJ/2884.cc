#include<iostream>
#include<string>

using namespace std;

int main()
{
	int h, m;
	scanf("%d %d", &h, &m);
	m -= 45;
	if (m < 0) {
		h -= 1;
		m += 60;
	}
	if (h < 0) {
		h = 23;
	}
	printf("%d %d", h, m);
}