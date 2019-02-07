#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

const int MAX = 1000000;
vector<bool> arr(MAX + 1);
vector<int> prime(MAX + 1);

int main() {
	int pn = 0;
	long long answer = 0;
	for (int i = 2; i <= sqrt(MAX); i++) {
		if (arr[i] == true)
			continue;
		for (int j = i + i; j <= MAX; j += i) {
			arr[j] = true;
		}
	}
	for (int i = 2; i <= MAX; i++) {
		if (arr[i] == false)
			prime[pn++] = i;
	}
	while (true) {
		int input;
		scanf("%d", &input);
		if (input == 0)break;
		for (int i = 0; i < pn; i++) {
			if (arr[input - prime[i]] == false) {
				printf("%d = %d + %d\n", input, prime[i], input - prime[i]);
				break;
			}
		}
	}
}