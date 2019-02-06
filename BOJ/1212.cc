#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string in;
	cin >> in;
	int n = in[0] - '0';
	if (n == 0) {
		printf("0");
		return 0;
	}
	for (int i = 0; i < in.size(); i++) {
		int n = in[i] - '0';
		stack<char> result;
		if (i == 0) {
			while (n != 0) {
				char input;
				if (n % 2 < 10)input = n % 2 + '0';
				else input = n % 2 + 55;
				result.push(input);
				n /= 2;
			}
		}
		else {
			for (int j = 0; j < 3; j++) {
				char input;
				input = n % 2 + '0';
				result.push(input);
				n /= 2;
			}
		}
		while (!result.empty()) {
			printf("%c", result.top());
			result.pop();
		}
	}
}