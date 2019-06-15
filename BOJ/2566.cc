#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int input[9][9];
	int max = 0;
	int maxindex[2];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> input[i][j];
			if (input[i][j] > max) {
				max = input[i][j];
				maxindex[0] = i + 1;
				maxindex[1] = j + 1;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", maxindex[0], maxindex[1]);

	
}