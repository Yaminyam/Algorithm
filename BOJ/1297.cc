#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	double result;
	result = (a*b) / sqrt(c*c + b * b);
	cout << (int)result << " " << (int)(c/b*result);
}