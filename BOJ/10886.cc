#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ok=0;
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		if (a)ok++;
		else ok--;
	}
	if (ok > 0)printf("Junhee is cute!");
	else printf("Junhee is not cute!");
}