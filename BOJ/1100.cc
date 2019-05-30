#include<iostream>

using namespace std;

int main()
{
	char input[8][8];
	int count=0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf(" %1c", &input[i][j]);
			if (!(i + j & 1) && input[i][j] == 'F') {
				count++;
			}
		}
	}
	printf("%d", count);

}