#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		int count = 0;
		cin >> a >> b;
		for (int i = 0; i < a.size(); i++) {
			if (a[i] != b[i])count++;
		}
		cout << "Hamming distance is " << count << "." << endl;
	}
}