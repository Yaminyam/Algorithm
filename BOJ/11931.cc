#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main()
{
	int n;
	int input[1000000];
	cin >> n;
	for (int i = 0; i < n; i++)scanf("%d", &input[i]);
	sort(input, input + n,greater<int>());
	for (int i = 0; i < n; i++)printf("%d\n", input[i]);
}