#include<iostream>

using namespace std;

int main()
{
	int num[7] = { 64,32,16,8,4,2,1 };
	int count = 0;
	int input;
	scanf("%d", &input);
	int i;
	while (input != 0) {
		for (i = 0; i < 7; i++) {
			if (num[i] <= input) {
				input -= num[i];
				break;
			}
		}
		count++;
	}
	printf("%d", count);
}