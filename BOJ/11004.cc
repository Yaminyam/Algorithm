#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,k;
	int input[5000000];
	scanf("%d %d",&n,&k);
	for (int i = 0; i < n; i++)scanf("%d", &input[i]);
	sort(input, input + n);
	printf("%d",input[k-1]);
} 