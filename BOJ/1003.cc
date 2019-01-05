#include<iostream>

using namespace std;

int main()
{
	int t;
	int n[40];
	int a;
	scanf("%d", &t);
	pair<int, int> p[41];
	p[0].first = 1;
	p[0].second = 0;
	p[1].first = 0;
	p[1].second = 1;
	for (int i = 2; i < 41; i++)
	{
		p[i].first = p[i - 1].first + p[i - 2].first;
		p[i].second = p[i - 1].second + p[i - 2].second;
	}
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &a);
		printf("%d %d\n", p[a].first, p[a].second);
	}
}