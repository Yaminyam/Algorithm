#include<stdio.h>

int main() {
	int i = 0, count = 0, j = 0;
	char a[1001] = { '\0' };
	gets(a);
	while (a[j] != '\0') {
		j++;
	}

	while (count != 4) {
		if (a[i] == 'U' &&count == 0) {
			count++;
		}
		if (a[i] == 'C'&&count == 1) {
			count++;
		}
		if (a[i] == 'P'&&count == 2) {
			count++;
		}
		if (a[i] == 'C'&&count == 3) {
			count++;
		}
		if (j == i)	break;
		i++;

	}
	if (count == 4) {
		printf("I love UCPC");
	}
	else {
		printf("I hate UCPC");
	}

	return 0;
}
