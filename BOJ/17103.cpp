#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

const int MAX = 10000;
vector<bool> arr(MAX + 1);
vector<int> prime(MAX + 1);

int main() {
	int pn = 0;
	long long answer = 0;
	int sMAX = sqrt(MAX);
	arr[1] = true;
	for (int i = 2; i <= sMAX; i++) {
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
	int n;
	cin >> n;
	while (n--) {
		int input;
		int count = 0;
		scanf("%d", &input);
		if (input == 0)break;
		for (int i = 0; i < pn; i++) {
			if (input > prime[i]) {
				if (arr[input - prime[i]] == false) {
					count++;
				}
			}
		}
		printf("%d\n", (count+1)/2);
	}
}