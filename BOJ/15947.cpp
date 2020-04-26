#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int a;
	string song[15] = {"baby", "sukhwan", "tururu", "turu", "very", "cute", "tururu", "turu", "in", "bed", "tururu", "turu", "baby", "sukhwan"};
	scanf("%d", &a);
	if ((a - 1) % 14 % 4 == 2 || (a - 1) % 14 % 4 == 3) {
		for (int i = 0; i < a / 14; i++) {
			song[(a - 1) % 14] += "ru";
		}
	}
	if ((a - 1) / 14 > 2) {
		if ((a - 1) % 14 % 4 == 2) {
			song[(a - 1) % 14] = "tu+ru*";
			song[(a - 1) % 14] += to_string((a - 1) / 14 + 2);
		}
	}
	if ((a - 1) / 14 > 3) {
		if ((a - 1) % 14 % 4 == 3) {
			song[(a - 1) % 14] = "tu+ru*";
			song[(a - 1) % 14] += to_string((a - 1) / 14 + 1);
		}
	}
	cout << song[(a - 1) % 14];
}