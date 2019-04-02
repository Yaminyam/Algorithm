#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	char a;
	int count[26] = { 0, };
	int maxnum = 0;
	int maxindex = 0;

	for (int i = 0; i < 10000; i++)
	{
		a = getchar();
		if (a == EOF)break;
		count[a - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		if (count[i] > maxnum) {
			maxnum = count[i];
		}
	}

	for (int i = 0; i < 26; i++) {
		if (count[i] == maxnum) {
			printf("%c", i + 97);
		}
	}
}