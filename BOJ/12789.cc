#include<iostream>
#include<string>
#include<stack>
#include<queue>

using namespace std;

int main()
{
	int n;
	queue<int> input;
	stack<int> temp;
	int count = 1;
	int a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		input.push(a);
	}
	while (!input.empty()) {
		while (!temp.empty()) {
			if (temp.top() == count) {
				temp.pop();
				count++;
			}
			else break;
		}
		if (input.front() == count) {
			input.pop();
			count++;
		} else {
			temp.push(input.front());
			input.pop();
		}
	}
	while (!temp.empty()) {
		if (temp.top() == count) {
			temp.pop();
			count++;
		}
		else break;
	}
	if (temp.empty())printf("Nice");
	else printf("Sad");
}