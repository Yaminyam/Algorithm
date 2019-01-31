#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Time {
	int begin, end;
};

bool cmp(Time u, Time v) {
	if (u.end == v.end)
		return u.begin < v.begin;
	else
		return u.end < v.end;
}

int main()
{
	int n;
	int count = 0;
	int endTime = 0;
	scanf("%d", &n);
	vector<Time> a(n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &a[i].begin, &a[i].end);
	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < a.size(); i++) {
		if (endTime <= a[i].begin) {
			endTime = a[i].end;
			count++;
		}
	}
	printf("%d", count);
}