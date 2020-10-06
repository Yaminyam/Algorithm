#include<iostream>

using namespace std;

int main()
{
	int a;
	int sum = 0;
	cin >> a;
	for (int i = 0; i <= a; i++) {
		sum += i/2+1;
	}
	cout << sum;
}