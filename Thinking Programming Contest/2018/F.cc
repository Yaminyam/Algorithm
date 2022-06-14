#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

string book[16];
int price[16];
int bookcount[16][26];
int chacount[26];

int main()
{
	string cha;
	int n;
	cin >> cha;
	for (int i = 0; i < cha.length(); i++)
		chacount[cha[i] - 'A']++;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> price[i] >> book[i];
		for (int j = 0; j < book[i].length(); j++)
			bookcount[i][book[i][j] - 'A']++;
	}
	int result = 1600001;
	int size = 1 << n;
	for (int i = 1; i < size; i++) {
		int cost = 0;
		int count[26] = { 0, };
		for (int j = 1, index = 0; j <= i; j <<= 1, index++) {
			if ((i & j) == j) {
				cost += price[index];
				for (int k = 0; k < 26; k++) {
					count[k] += bookcount[index][k];
				}
			}
		}
		bool check = true;
		for (int j = 0; j < 26; j++) {
			if (count[j] < chacount[j]) {
				check = false;
				break;
			}
		}
		if (check)
			result = min(result, cost);
	}
	if (result == 1600001)printf("-1");
	else printf("%d", result);
}