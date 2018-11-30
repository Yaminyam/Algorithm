#include<iostream>
#include<cstring>
#include<stack>

using namespace std;

int main()
{
	stack<char> stk;
	char input[100001];
	int count = 0;
	int temp = 1;
	int sum = 0;
	scanf("%s", input);
	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == '[')
		{
			temp *= 3;
			stk.push('[');
		}
		else if (input[i] == ']')
		{
			if (input[i - 1] == '[')sum += temp;
			temp /= 3;
			if (stk.empty())
			{
				printf("0");
				return 0;
			}
			if (stk.top() == '[')stk.pop();
		}

		else if (input[i] == '(')
		{
			temp *= 2;
			stk.push('(');
		}
		else if (input[i] == ')')
		{
			if (input[i - 1] == '(')sum += temp;
			temp /= 2;
			if (stk.empty())
			{
				printf("0");
				return 0;
			}
			if (stk.top() == '(')stk.pop();
		}
	}
	printf("%d", stk.empty() ? sum : 0);
}