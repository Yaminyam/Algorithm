#include<iostream>
#include<algorithm>

using namespace std;

int sum = 0;
int mans[9];

void func() {
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - mans[i] - mans[j] == 100) {
				mans[i] = -1;
				mans[j] = -1;
				return;
			}
		}
	}
}

int main()
{
	
	for (int i = 0; i < 9; i++) {
		cin >> mans[i];
	}

	for (int i = 0; i < 9; i++) {
		sum += mans[i];
	}

	func();
	sort(mans, mans + 9);

	for (int i = 2; i < 9; i++) {
		cout << mans[i] << "\n";
	}
}