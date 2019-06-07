#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int> input;
	bool result = false;
	int a;
	while (cin >> a) {
		input.push_back(a);
	}
	for (int i = 0; i < input.size() - 1; i++) {
		if (input[i] > input[i + 1]) {
			result = true;
			break;
		}
	}
	if (result)printf("Bad");
	else printf("Good");
}