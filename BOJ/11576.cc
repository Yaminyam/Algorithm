#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;

void eight(long long n, int b) {
	stack<int> result;
	long long ten = 1;
	while (n != 0) {
		int input;
		input = n % b;
		n /= b;
		result.push(input);
	}
	while (!result.empty()) {
		printf("%d ", result.top());
		result.pop();
	}
}

long long two(vector<long long> n, int b) {
	long long ten = 1;
	long long result = 0;

	for (int i = 1; i <= n.size(); i++) {
		int input;
		input = n[n.size() - i];
		result += input * ten;
		ten *= b;
	}
	return result;
}

int main()
{
	int a, b;
	int m;
	scanf("%d %d", &a, &b);
	scanf("%d", &m);
	vector<long long> input(m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &input[i]);
	}
	eight(two(input, a), b);
}