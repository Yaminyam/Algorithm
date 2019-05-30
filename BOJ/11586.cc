#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	int n;
	char input[101][101];
	int cmd;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf(" %1c", &input[i][j]);
		}
	}
	cin >> cmd;
	if (cmd == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << input[i][j];
			}
			cout << endl;
		}
	}
	else if (cmd == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j >= 0; j--) {
				cout << input[i][j];
			}
			cout << endl;
		}
	}
	else if (cmd == 3) {
		for (int i = n - 1; i >= 0; i--) {
			for (int j = 0; j < n; j++) {
				cout << input[i][j];
			}
			cout << endl;
		}
	}
}