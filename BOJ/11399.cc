#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int sum = 0;
	int result = 0;
	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		sum += a[i];
		result += sum;
	}
	printf("%d", result);
}