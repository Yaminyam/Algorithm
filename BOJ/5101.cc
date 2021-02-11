#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int a = 1, b = 1, c = 1;;

	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)break;
		if ((c - a) % b == 0 && c > a)cout << (c - a) / b + 1 << "\n";
		else cout << "X\n";
	}
}