#include<iostream>

using namespace std;

int main()
{
	int n;
	int input[12];
	int check[12] = { 0, };
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> input[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (!input[i] && !check[j]) {
				check[j] = i;
				break;
			}
			else if (!check[j]) {
				input[i]--;
			}
			
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << check[i] << " ";
	}
}