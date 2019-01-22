#include<iostream>

using namespace std;

int main()
{
	char a[2];
	int b[3];
	int temp[2];
	scanf("%d %c %d %c %d", &b[0], &a[0], &b[1], &a[1], &b[2]);

	temp[0] = b[0];
	for (int i = 0; i < 2; i++){
		switch (a[i]) {
		case '+':
			temp[0] += b[i+1];
			break;
		case '-':
			temp[0] -= b[i+1];
			break;
		case '*':
			temp[0] *= b[i+1];
			break;
		case '/':
			temp[0] /= b[i+1];
			break;
		}
	}

	temp[1] = b[1];
	switch (a[1]) {
	case '+':
		temp[1] += b[2];
		break;
	case '-':
		temp[1] -= b[2];
		break;
	case '*':
		temp[1] *= b[2];
		break;
	case '/':
		temp[1] /= b[2];
		break;
	}

	switch (a[0]) {
	case '+':
		temp[1] = b[0] + temp[1];
		break;
	case '-':
		temp[1] = b[0] - temp[1];
		break;
	case '*':
		temp[1] = b[0] * temp[1];
		break;
	case '/':
		temp[1] = b[0] / temp[1];
		break;
	}
	
	if (temp[0] > temp[1])
		printf("%d\n%d", temp[1], temp[0]);
	else
		printf("%d\n%d", temp[0], temp[1]);
}