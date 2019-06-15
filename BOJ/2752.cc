#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int input[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &input[i]);
	}
	sort(input, input + 3);
	for (int i = 0; i < 3; i++) {
		printf("%d ", input[i]);
	}
}