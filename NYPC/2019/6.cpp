#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		bool check = true;
		string input;
		cin >> input;
		
		for (int j = 33; j < 127; j++) {
			if ((64 <= j && j <= 90) ||
				(97 <= j && j <= 122) ||
				(48 <= j && j <= 57) ||
				(45 <= j && j <= 46)) continue;
			if (input.find(j) != string::npos) {
				check = false;
				break;
			}
		}

		int count = 0;
		for (int j = 0; j < input.length(); j++) {
			if (input[j] == '@')count++;
		}
		if (count != 1) check = false;

		if (input.find('@') == 0 || input.find('@') == (input.length() - 1)) check = false;

		if (check) cout << "Yes\n";
		else cout << "No\n";
	}
	
}