#include<iostream>

using namespace std;

int main()
{
	int input;
	int a = 3;
	long long result[15];
	for (int i = 0; i < 15; i++) {
		result[i] = a * a;
		a = a * 2 - 1;	
	}
	scanf("%d", &input);
	printf("%d", result[input-1]);
}