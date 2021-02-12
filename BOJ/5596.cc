#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int a, b, c, d;
	int az, bz, cz, dz;
	cin >> a >> b >> c >> d;
	int sum = 0;
	sum = a + b + c + d;
	cin >> az >> bz >> cz >> dz;
	int sumz = 0;
	sumz = az + bz + cz + dz;
	int result = max(sum, sumz);
	cout << result;
}