#include<deque>
#include<string>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		int count[4] = { 0, };
		for (char a : s)
		{
			if (a == ' ')count[3]++;
			else if (a >= 'a' && a <= 'z')count[0]++;
			else if (a >= 'A' && a <= 'Z')count[1]++;
			else if (a >= '0'&& a <= '9')count[2]++;
		}
		for (int i = 0; i < 4; i++)
		{
			cout << count[i] << " ";
		}
		cout << endl;
	}
}