#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	string input[5];
	int count = 0;
	for (int i = 0; i < 5; i++) {
		cin >> input[i];
		if (input[i].find("FBI") != string::npos) {
			printf("%d ", i + 1);
			count++;
		}
	}
	if (count == 0)printf("HE GOT AWAY!");
}