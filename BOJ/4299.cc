#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int a;
	int b;
	cin >> a >> b;
	if ((a + b) % 2 || a < b) cout << "-1";
	else cout << (a + b) / 2 << " " << a - (a + b) / 2;
}