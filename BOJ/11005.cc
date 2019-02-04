#include<iostream>
#include<stack>

using namespace std;

int main()
{
	int n, b;
	stack<char> result;
	scanf("%d %d", &n, &b);
	while (n!=0) {
		char input;
		if (n % b < 10)input = n % b + '0';
		else input = n % b + 55;
		result.push(input);
		n /= b;
	}
	while (!result.empty()) {
		printf("%c", result.top());
		result.pop();
	}
}