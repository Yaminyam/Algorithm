#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;
		if (input[input.size() - 1] == '1' ||
			input[input.size() - 1] == '3' ||
			input[input.size() - 1] == '5' ||
			input[input.size() - 1] == '7' ||
			input[input.size() - 1] == '9')
			printf("odd\n");
		else
			printf("even\n");
	}
}