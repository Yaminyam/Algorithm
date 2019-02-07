#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a;
	long sum = 0;
	bool num = false;

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
	}
	int squre = sqrt(n);
	for (int j = 2; j <= squre; j++) {
		if ((n % j) == 0)
		{
			num = true;
			break;
		}
	}
	
	if (num == false)printf("Yes");
	else printf("No");
}