#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

string color[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };

int main()
{
	int input[3];
	string cmd[3];
	for (int i = 0; i < 3; i++) {
		cin >> cmd[i];
		for (int j = 0; j < 10; j++) {
			if (color[j] == cmd[i])input[i] = j;
		}
	}
	long long result = input[0] * 10 + input[1];
	for (int i = 0; i < input[2]; i++) {
		result *= 10;
	}
	printf("%lld", result);
}