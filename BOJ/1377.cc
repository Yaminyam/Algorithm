#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int result = 0;
	scanf("%d", &n);
	vector<pair<int, int>> input(n);
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &input[i].first);
		input[i].second = i;
	}
	sort(input.begin(), input.end());
	for (int i = 0; i < n; i++) {
		result = max(result, input[i].second - i);
	}
	printf("%d", result + 1);

}