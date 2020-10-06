#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string input;
		int count[26] = { 0, };
		int sum = 0;
		cin >> input;
		for (int i = 0; i < input.size(); i++) {
			count[input[i] - 65]++;
		}
		for (int i = 0; i < 26; i++) {
			if (count[i] == 0) {
				sum += i + 65;
			}
		}
		printf("%d\n", sum);
	}
}