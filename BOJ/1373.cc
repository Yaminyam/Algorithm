#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string n;
	cin >> n;
	string output;
	int size = n.size();
	for (int i = 1; i <= size; i+=3) {
		int input[3];
		int result = 0;
		input[2] = n[size - i] - '0';
		result += input[2];
		if ((size - i - 1) >= 0) {
			input[1] = n[size - i - 1] - '0';
			result += input[1] * 2;
		}
		if ((size - i - 2) >= 0) {
			input[0] = n[size - i - 2] - '0';
			result += input[0] * 4;
		}
		output += result + '0';
	}
	reverse(output.begin(),output.end());
	cout << output;
}