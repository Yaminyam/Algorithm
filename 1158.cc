#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
  queue<int>q;
  int a, b;
  cin >> a >> b;
  for (int i = 0; i < a; i++)
  {
    q.push(i + 1);
  }
  cout << "<";
  while (q.size() != 1)
  {
    for (int i = 0; i < b - 1; i++)
    {
      q.push(q.front());
      q.pop();
    }
    cout << q.front() << ", ";
    q.pop();
  }
  cout << q.front() << ">";
}