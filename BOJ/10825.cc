#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

struct user {
	string name;
	int korea;
	int english;
	int math;
};

bool compare(user user1, user user2) {
	if (user1.math == user2.math && user1.english == user2.english && user1.korea == user2.korea)
		return user1.name < user2.name;
	if (user1.english == user2.english && user1.korea == user2.korea)
		return user1.math > user2.math;
	if (user1.korea == user2.korea)
		return user1.english < user2.english;
	return user1.korea > user2.korea;
}

int main()
{
	vector<user> input;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		user inputuser;
		cin >> inputuser.name >> inputuser.korea >> inputuser.english >> inputuser.math;
		input.push_back(inputuser);
	}
	sort(input.begin(), input.end(), compare);
	for (int i = 0; i < input.size(); i++)
		cout << input[i].name << "\n";
}