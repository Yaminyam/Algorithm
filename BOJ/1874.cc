#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	int n;
	int input[100000];
	int count = 0;
	string result;
	stack<int> s;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		s.push(i);
		result.append("+");
		while (s.top() == input[count])
		{
			s.pop();
			result.append("-");
			count++;
			if (count == n || s.empty())break;
		}
	}
	if (count == n)
	{
		for (int i = 0; i < result.length(); i++)
		{
			printf("%c\n", result.at(i));
		}
	}
	else
		cout << "NO" << endl;
}