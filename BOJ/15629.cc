#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<string>

using namespace std;
const int INF = numeric_limits<int>::max();

int main()
{
	int sum = 0;
	int n;
	int checkzamzim=0;
	bool checksouth=false;
	string input;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == "ethiopia")sum += 50;
		else if (input == "kenya")sum += 50;
		else if (input == "namibia") {
			if (checksouth) sum += 40;
			else sum += 140;
		}
		else if (input == "south-africa") checksouth = true;
		else if (input == "tanzania") sum += 50;
		else if (input == "zambia") {
			if (!checkzamzim) {
				sum += 50;
			}
			else {
				sum += 20;
			}
			checkzamzim = 2;
		}
		else if (input == "zimbabwe") {
			if (!checkzamzim) {
				sum += 30;
			}
			checkzamzim = 2;
		}
		if(checkzamzim)checkzamzim--;
	}
	cout << sum;
}