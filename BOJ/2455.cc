#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	int input[4][2];
	int result = 0;
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		cin >> input[i][0] >> input[i][1];
		sum -= input[i][0];
		sum += input[i][1];
		if (sum > result)result = sum;
	}
	printf("%d", result);
}