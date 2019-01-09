#include<deque>
#include<string>
#include<cstring>
#include<iostream>

using namespace std;

int main()
{
	char input[101];
	int count[26] = { 0, };

	cin >> input;

	for (int i = 0; i < strlen(input); i++)
	{
		count[input[i] - 97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << count[i] << " ";
	}
}