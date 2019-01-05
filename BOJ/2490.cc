#include<iostream>

using namespace std;

int main()
{
	int input[3][4];

	for (int i = 0; i < 3; i++)
	{
		int count = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &input[i][j]);
			if(input[i][j] == 0)
				count++;
		}
		switch (count) {
		case 1: 
			printf("A\n");
			break;
		case 2:
			printf("B\n");
			break;
		case 3:
			printf("C\n");
			break;
		case 4:
			printf("D\n");
			break;
		case 0:
			printf("E\n");
			break;
		}
	}
	
}