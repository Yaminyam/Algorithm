#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	int n, k, b;
	int input[101];
	int result = 0;
	cin >> n >> k >> b;
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	for (int i = 0; i < k; i++) {
		result += input[(b++ - 1) % n];
	}
	cout << result;
}