#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	string n;
	int ten = 1;
	int b;
	int result = 0;
	cin >> n >> b;
	
	for (int i = 1; i <= n.size(); i++) {
		int input;
		if ('0' <= n[n.size() - i] && n[n.size() - i] <= '9')
			input = n[n.size() - i] - '0';
		else
			input = n[n.size() - i] - 55;
		result += input * ten;
		ten *= b;
	}
	printf("%d", result);
}