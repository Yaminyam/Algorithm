#include<iostream>
#include<stack>
#include<cstring>

using namespace std;

int main()
{
	char input[100000];
	stack<char> left;
	stack<char> right;
	int n;
	scanf("%s", input);
	int t = strlen(input);
	for (int i = 0; i < t; i++) {
		left.push(input[i]);
	}
	scanf("%d", &n);
	while (n--) {
		char command;
		scanf(" %c", &command);
		if (command == 'P') {
			char tinput;
			scanf(" %c", &tinput);
			left.push(tinput);
		}
		else if (command == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (command == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (command == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		printf("%c", right.top());
		right.pop();
	}
}