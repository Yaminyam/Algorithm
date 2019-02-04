#include<iostream>
#include<string>

using namespace std;

int d[5001];
int mod = 1000000;

int main()
{
	string input;
	cin >> input;
	int n = input.size();
	input = " " + input;
	d[0] = 1;
	for (int i = 1; i <= n; i++) {
		int x = input[i] - '0';
		if (1 <= x && x <= 9) {
			d[i] += d[i - 1];
			d[i] %= mod;
		}
		x = (input[i - 1] - '0') * 10 + (input[i] - '0');
		if (10 <= x && x <= 26) {
			d[i] += d[i - 2];
			d[i] %= mod;
		}
	}
	printf("%d", d[n]);
}