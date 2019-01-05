#include<iostream>
#include<stack>

using namespace std;

int lcm(int a, int b);
int gcd(int a, int b);

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n, x, y;
		int size;
		int i, j;
		int count = 0;
		bool print = false;
		int number[40000];
		cin >> m >> n >> x >> y;
		int l = lcm(m, n);
		for (int i = 0; i*m + x <= l; i++)
		{
			number[i] = i*m + x;
			count++;
		}
		for (int i = 0; i < count; i++)
		{
			if (number[i] % n == y || number[i] % n + n == y)
			{
				cout << number[i] << endl;
				print = true;
				break;
			}
		}
		if (print == false)cout << "-1" << endl;
	}
}

int gcd(int a, int b) {
	while (b != 0) {
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}