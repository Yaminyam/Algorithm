#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int input;
	cin >> input;
	if (input % 2 == 0) {
		cout << "I LOVE CBNU";
	}
	else if (input % 2 == 1) {
		for (int i = 0; i < input; i++) {
			cout << "*";
		}
		cout << "\n";
		
		for (int i = 0; i < input / 2; i++) {
			cout << " ";
		}
		cout << "*";
		cout << "\n";
		int k = 1;
		for (int i = input / 2 - 1; i >= 0; i--) {
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < k; j++) {
				cout << " ";
			}
			cout << "*";
			k += 2;
			cout << "\n";
		}
		
	}
}


