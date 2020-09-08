#include<iostream>
#include<cstdio>

#include<algorithm>
#include<functional>

#include<string>
#include<vector>
#include<queue>
#include<stack>

using namespace std;
const int INF = numeric_limits<int>::max();

int main()
{
	int a, b, c;
	scanf("%d + %d = %d", &a, &b, &c);
	if (a + b == c) {
		cout << "YES";
		return 0;
	}
	cout << "NO";
}