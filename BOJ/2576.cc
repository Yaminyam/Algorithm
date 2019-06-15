#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	int arr[7];
	int sum = 0;
	int result = 987654321;
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
		if (arr[i] & 1) {
			sum += arr[i];
			result = min(result, arr[i]);
		}
	}
	sort(arr, arr + 7);
	if (sum == 0) {
		printf("-1");
		return 0;
	}
	printf("%d\n%d", sum, result);
}