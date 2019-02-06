#include<iostream>
#include<stack>

using namespace std;

int main()
{
	int n;
	stack<char> result;
	scanf("%d", &n);
	if (n == 0) {
		printf("0");
		return 0;
	}
	while (n != 0) {
		char input;
		if (n % -2 < 0) {
			input = n % -2 + 2 + '0';
			n -= 1;
		}
		else
			input = n % -2 + '0';
		result.push(input);
		n /= -2;
	}
	while (!result.empty()) {
		printf("%c", result.top());
		result.pop();
	}
}