#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int buger = min(min(a, b), c);
	int drink = min(d, e);
	cout << buger + drink - 50;
}