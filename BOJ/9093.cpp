#include <iostream>
#include <stack>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        string s;
        getline(cin, s);
        s += '\n';
        stack<char> a;
        for (char c : s)
        {
            if (c == ' ' || c == '\n')
            {
                while (s.empty())
                {
                    cout << a.top();
                    a.pop();
                }
            }
            else
            {
                a.push(c);
            }
        }
    }
}
