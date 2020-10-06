#include<iostream>
#include<string>

using namespace std;

int main()
{
	int cas = 1;
	while (true) {
		int a, b;
		string cmd;
		cin >> a >> cmd >> b;
		if (cmd == ">") {
			if (a > b)printf("Case %d: true\n",cas++);
			else printf("Case %d: false\n",cas++);
		}
		else if(cmd == ">=") {
			if (a >= b)printf("Case %d: true\n", cas++);
			else printf("Case %d: false\n", cas++);
		}
		else if (cmd == "<") {
			if (a < b)printf("Case %d: true\n", cas++);
			else printf("Case %d: false\n", cas++);
		}
		else if (cmd == "<=") {
			if (a <= b)printf("Case %d: true\n", cas++);
			else printf("Case %d: false\n", cas++);
		}
		else if (cmd == "==") {
			if (a == b)printf("Case %d: true\n", cas++);
			else printf("Case %d: false\n", cas++);
		}
		else if (cmd == "!=") {
			if (a != b)printf("Case %d: true\n", cas++);
			else printf("Case %d: false\n", cas++);
		}
		else if (cmd == "E")break;
	}
}