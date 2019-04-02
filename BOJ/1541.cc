#include<iostream>
#include<string>

using namespace std;

int main() {
	string input;
	cin >> input;
	bool check = false;
	int sum = 0;
	int temp = 0;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] >= '0' && input[i] <= '9') {
			if (temp != 0)
				temp *= 10;
			temp += input[i] - 48;
		}
		else {
			if (check == false)
				sum += temp;
			else
				sum -= temp;
			temp = 0;
		}
		if (input[i] == '-')
			check = true;
	}
	if (check == false)
		sum += temp;
	else
		sum -= temp;
	printf("%d", sum);
}