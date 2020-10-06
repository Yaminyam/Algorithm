#include <iostream>
#include <stack>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    string s;
    getline(cin, s);
    s += '\n';
    stack<char> a;
    bool tag=false;
    for (char c : s)
    {
        if (c == ' ' || c == '\n')
        {
            while (!a.empty())
            {
                cout << a.top();
                a.pop();
            }
            cout << c;
        }
        else if(c == '<') {
            tag=true;
            while (!a.empty())
            {
                cout << a.top();
                a.pop();
            }
            cout << c;
        }
        else if(c == '>') {
            tag=false;
            cout << c;
        }
        else if(tag){
            cout << c;
        }
        else
        {
            if(tag == false)
                a.push(c);
            
        }
    }
}
