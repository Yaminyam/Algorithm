#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int time=0;
	time += a * 60;
	time += b;
	int c;
	cin >> c;
	time += c;
	int h, m;
	h = time / 60;
	if (h >= 24)h -= 24;
	m = time % 60;
	cout << h << " " << m;
}