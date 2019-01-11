#include<string>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string *input = new string[s.size()];
	for (int i = 0; i < s.size(); i++)
	{
		input[i] = s.substr(i);
	}
	sort(input,input+s.size());
	for (int i = 0; i < s.size(); i++)
	{
		cout << input[i] << endl;
	}

}