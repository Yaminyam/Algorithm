#include<iostream>
#include<string>

using namespace std;

int main()
{
	while (true) {
		char a = getchar();
		if (a == EOF)break;
		if ('a' <= a && a <= 'z')
			printf("%c", a - 32);
		else if('A' <= a && a <= 'Z')
			printf("%c", a + 32);
	}
}