#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

struct user {
	int age;
	string name;
	int num;
};

bool compare(user user1, user user2) {
	if (user1.age == user2.age)
		return user1.num < user2.num;
	return user1.age < user2.age;
}

int main()
{
	vector<user> input;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		user inputuser;
		cin >> inputuser.age >> inputuser.name;
		inputuser.num = i;
		input.push_back(inputuser);
	}
	sort(input.begin(), input.end(), compare);
	for (int i = 0; i < input.size(); i++)
		cout << input[i].age << " " << input[i].name << "\n";
}