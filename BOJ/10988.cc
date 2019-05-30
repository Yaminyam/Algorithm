#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	string input;
	cin >> input;
	string temp = input;
	reverse(input.begin(), input.end());
	if (input == temp)printf("1");
	else printf("0");
}