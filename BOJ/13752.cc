#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		for (int j = 0; j < a; j++)
			printf("=");
		printf("\n");
	}
}