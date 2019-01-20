#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int a, b;
	int ttang = 0;
	double count = 0;
	vector<int> cards;
	int countnum[11];

	scanf("%d %d", &a, &b);
	if (a == b)ttang = 1;

	for (int x = 1; x <= 10; x++)
		countnum[x] = 2;
	countnum[a]--;
	countnum[b]--;

	for (int x = 1; x <= 10; x++)
		while (countnum[x]--)
			cards.push_back(x);

	for (int i = 0; i < cards.size(); i++) {
		for (int j = i+1; j < cards.size(); j++) {
			if (cards[i] == cards[j]) {
				if (ttang == 1)
				{
					if (a > cards[i])continue;
					else count++;
				}
				else count++;
			}
			else {
				if (ttang == 1) continue;
				else {
					if ((a + b) % 10 > (cards[i] + cards[j]) % 10)continue;
					else count++;
				}
			}
		}
	}

	printf("%.3lf", (153.0-count) / 153.0);
}