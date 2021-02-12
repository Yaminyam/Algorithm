#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int h, m, s, he, me, se;
	
	for (int i = 0; i < 3; i++) {
		int cur = 0;
		int cure = 0;
		cin >> h >> m >> s >> he >> me >> se;
		cur += h * 3600 + m * 60 + s;
		cure += he * 3600 + me * 60 + se;
		cure -= cur;
		h = cure / 3600;
		cure %= 3600;
		m = cure / 60;
		cure %= 60;
		s = cure;
		cout << h << " " << m << " " << s << "\n";
	}
}