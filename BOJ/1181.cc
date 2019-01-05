#include<iostream>
#include<algorithm>
#include<functional>
#include<string>

using namespace std;

int main()
{
	int n;
	string input[20000];
	string input2[20000];
	int count = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++) cin >> input[i];
	sort(input, input + n);
	for (int i = 1; i <= 50; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (input[j].length() == i)
			{
				input2[count] = input[j];
				count++;
			}
		}
	}
	cout << input2[0] << endl;
	for (int i = 1; i < n; i++)
	{
		if (input2[i].compare(input2[i - 1]))
		{
			cout << input2[i] << endl;
		}
	}
}