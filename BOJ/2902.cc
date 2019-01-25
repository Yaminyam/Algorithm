#include<iostream>
#include<string>

using namespace std;

int main()
{
	char a[100];
	scanf("%s", &a);
	printf("%c", a[0]);
	for (int i = 1; i < 100; i++)
	{
		if (a[i - 1] == '-')printf("%c", a[i]);
	}
}