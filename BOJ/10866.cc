#include<deque>
#include<string>
#include<iostream>

using namespace std;
int main()
{
	int n;
	deque<int> d;
	cin >> n;
	while (n--)
	{
		string cmd;
		cin >> cmd;
		if (cmd == "push_front")
		{
			int num;
			cin >> num;
			d.push_front(num);
		}
		else if (cmd == "push_back")
		{
			int num;
			cin >> num;
			d.push_back(num);
		}
		else if (cmd == "pop_front")
		{
			if (!d.empty())
			{
				cout << d.front() << endl;
				d.pop_front();
			}
			else
			{
				cout << "-1" << endl;
			}
		}
		else if (cmd == "pop_back")
		{
			if (!d.empty())
			{
				cout << d.back() << endl;
				d.pop_back();
			}
			else
			{
				cout << "-1" << endl;
			}
		}
		else if (cmd == "size")
		{
			cout << d.size() << endl;
		}
		else if (cmd == "empty")
		{
			cout << d.empty() << endl;
		}
		else if (cmd == "front")
		{
			if (!d.empty())
			{
				cout << d.front() << endl;
			}
			else
			{
				cout << "-1" << endl;
			}
		}
		else if (cmd == "back")
		{
			if (!d.empty())
			{
				cout << d.back() << endl;
			}
			else
			{
				cout << "-1" << endl;
			}
		}
	}
}