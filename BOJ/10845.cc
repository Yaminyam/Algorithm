#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
  queue<int>q;
  int n;
  cin >> n;
  while (n--)
  {
    string cmd;
    cin >> cmd;
    if (cmd == "push")
    {
      int a;
      cin >> a;
      q.push(a);
    }
    else if (cmd == "pop")
    {
      if (q.empty()) {
        cout << "-1" << endl;
      }
      else {
        cout << q.front() << endl;
        q.pop();
      }
    }
    else if (cmd == "size")
    {
      cout << q.size() << endl;
    }
    else if (cmd == "empty")
    {
      cout << q.empty() << endl;
    }
    else if (cmd == "front")
    {
      if (q.empty()) {
        cout << "-1" << endl;
      }
      else {
        cout << q.front() << endl;
      }
    }
    else if (cmd == "back")
    {
      if (q.empty()) {
        cout << "-1" << endl;
      }
      else {
        cout << q.back() << endl;
      }
    }
  }
}