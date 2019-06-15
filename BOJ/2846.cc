#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int input[1000];
	int temp = 0;
	int result = 0;
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	for (int i = 1; i < n; i++) {
		if (input[i] > input[i - 1]) {
			temp += input[i] - input[i - 1];
		}
		else {
			result = max(result, temp);
			temp = 0;
		}
	}
	result = max(result, temp);
	temp = 0;
	printf("%d", result);
}