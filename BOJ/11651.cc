#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<pair<int, int>> input;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int first, second;
		scanf("%d %d", &first, &second);
		input.push_back(pair<int, int>(second, first));
	}
	sort(input.begin(), input.end());
	for (int i = 0; i < input.size(); i++)
		printf("%d %d\n", input[i].second, input[i].first);
}