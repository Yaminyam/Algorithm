#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>

using namespace std;

int main() {
	int n;
	int a[101];
	int b[101];
	int minnum = 987654321;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		if (b[i] == 0)continue;
		else minnum = min(minnum, a[i] / b[i]);
	}

	cout << minnum;
}