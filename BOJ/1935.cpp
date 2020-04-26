#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	stack<double> num;
	int arr[26];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (char ch : s) {
		if ('A' <= ch && ch <= 'Z') {
			num.push(arr[ch-65]);
		}
		else {
			double b = num.top();
			num.pop();
			double a = num.top();
			num.pop();
			switch (ch) {
			case '+':
				num.push(a + b);
				break;
			case '-':
				num.push(a - b);
				break;
			case '*':
				num.push(a * b);
				break;
			case '/':
				num.push(a / b);
				break;
			}
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << num.top();
}