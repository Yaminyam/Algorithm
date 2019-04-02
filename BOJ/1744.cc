#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>

using namespace std;

int main() {
	int n;
	int sum;
	int input;
	int one = 0;
	int zero = 0;
	vector<int> plus;
	vector<int> minus;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		if (input == 1)
			one++;
		else if (input > 0)
			plus.push_back(input);
		else if (input < 0)
			minus.push_back(input);
		else if (input == 0)
			zero++;
	}
	sort(plus.begin(), plus.end(), greater<int>());
	sort(minus.begin(), minus.end());
	if (plus.size() & 1) {
		plus.push_back(1);
	}
	if (minus.size() & 1) {
		minus.push_back(zero > 0 ? 0 : 1);
	}
	sum = one;
	for (int i = 0; i < plus.size(); i += 2) {
		sum += plus[i] * plus[i + 1];
	}
	for (int i = 0; i < minus.size(); i += 2) {
		sum += minus[i] * minus[i + 1];
	}
	printf("%d", sum);
}