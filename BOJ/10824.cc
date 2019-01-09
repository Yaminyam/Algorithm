#include<string>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	a += b;
	c += d;
	long long ab, cd;
	ab = stoll(a);
	cd = stoll(c);
	cout << ab + cd;
}