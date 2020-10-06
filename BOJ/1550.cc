#include<iostream>

using namespace std;

int main()
{
	char input[100];
	cin >> input;
	int nDec = (int)strtol(input, NULL, 16);
	cout << nDec;
}