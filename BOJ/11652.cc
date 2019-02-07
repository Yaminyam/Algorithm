#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int N;
	long long a;
	int count = 1;
	int result = 1;
	long long resultnum = 0;
	vector<long long> input;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%lld", &a);
		input.push_back(a);
	}
	sort(input.begin(), input.end());
	resultnum = input[0];
	for (int i = 1; i < N; i++) {
		if (input[i] == input[i - 1])
			count++;
		else {
			count = 1;
		}
		if (result < count) {
			result = count;
			resultnum = input[i];
		}
		
	}
	printf("%lld", resultnum);
}