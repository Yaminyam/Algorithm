#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> arr;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		arr.push_back(x);
	}
	if (prev_permutation(arr.begin(), arr.end())) {
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
	}
	else {
		cout << "-1";
	}
}