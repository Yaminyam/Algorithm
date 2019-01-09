#include<deque>
#include<string>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
	char s[101];
	cin.getline(s, 101);
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i] + 13 <= 'z')s[i] += 13;
			else s[i] -= 13;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if (s[i] + 13 <= 'Z')s[i] += 13;
			else s[i] -= 13;
		}
	}
	cout << s << endl;
}