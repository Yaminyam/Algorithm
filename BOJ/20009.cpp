#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

string readname() {
	char name[200];
	scanf("%s", name);
	return string(name);
}

int readint() {
	int x;
	scanf("%d", &x);
	return x;
}

const int MAXN = 200;

int main()
{
	int n = readint();
	map<string, vector<string> > boy[200];
	map<string, vector<string> > girl[200];
	map<string, int> boyp;
	map<string, int> girlp;
	for (int i = 0; i < n; i++) {
		boyp[ readname() ] = i;
	}
	for (int i = 0; i < n; i++) {
		girlp[ readname() ] = i;
	}
}
