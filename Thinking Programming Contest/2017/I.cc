#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int a;
	int maxnum = 0;
	int maxindex;
	string group[9] = { "PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY"};
	scanf("%d", &n);
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a);
			if (a > maxnum) {
				maxnum = a;
				maxindex = i;
			}
		}
	}
	cout << group[maxindex];
}