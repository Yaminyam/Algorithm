#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b,c ;
	cin >> a >> b >> c;
	int time=0;
	time += a * 60 * 60;
	time += b * 60;
	time += c;
	int d;
	cin >> d;
	time += d;
	int h, m, s;
	h = time / 3600;
	while (h >= 24) {
		h -= 24;
	}
	time %= 3600;
	m = time / 60;
	s = time % 60;
	cout << h << " " << m << " " << s;
}