#include<iostream>

using namespace std;

int main()
{
	int l, p;
	cin >> l >> p;
	int a = 5;
	while(a--) {
		int input;
		cin >> input;
		cout << input - l * p << " ";
	}
}