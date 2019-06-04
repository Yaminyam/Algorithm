#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n, m;
	int input[2000001];
	cin >> n >> m;
	for (int i = 0; i < n + m; i++) {
		cin >> input[i];
	}
	sort(input, input + n + m);
	for (int i = 0; i < n + m; i++) {
		cout << input[i] << " ";
	}
}