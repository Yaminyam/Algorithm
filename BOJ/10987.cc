#include<iostream>
#include<string>

using namespace std;

int main()
{
	string n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n.size(); i++) {
		if (n[i] == 'a' ||
			n[i] == 'i' ||
			n[i] == 'u' ||
			n[i] == 'e' ||
			n[i] == 'o' )
			count++;
	}
	printf("%d", count);

}