#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int a;
	bool result = false;
	scanf("%d", &a);
	while (a != 1) {
		if (a % 2 != 0) {
			result = true;
			break;
		}
		a /= 2;
	}
	if (result)printf("0");
	else printf("1");
}