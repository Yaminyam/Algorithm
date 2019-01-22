#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while (n--) {
		string input;
		int rd, ra, rb;
		int ctrue = 0;
		int k, j;
		string opcode[12] = { "ADD","SUB","MOV","AND","OR","NOT","MULT","LSFTL","LSFTR","ASFTR","RL","RR" };
		cin >> input >> rd >> ra >> rb;
		if (input.back() == 'C') {
			input.pop_back();
			ctrue = 1;
		}
		for (int i = 0; i < 12; i++) {
			if (input == opcode[i]) {
				int result[4] = { 0, };
				int num = i;
				for (k = 0; num > 0; k++) {
					result[k] = num % 2;
					num = num / 2;
				}
				for (j = 3; j >= 0; j--) {
					printf("%d", result[j]);
				}
			}
		}

		if (ctrue == 1)printf("10");
		else printf("00");

		int result1[3] = { 0, };
		for (k = 0; rd > 0; k++) {
			result1[k] = rd % 2;
			rd = rd / 2;
		}
		for (j = 2; j >= 0; j--) {
			printf("%d", result1[j]);
		}

		int result2[3] = { 0, };
		for (k = 0; ra > 0; k++) {
			result2[k] = ra % 2;
			ra = ra / 2;
		}
		for (j = 2; j >= 0; j--) {
			printf("%d", result2[j]);
		}

		if (ctrue == 0) {
			int result3[3] = { 0, };
			for (k = 0; rb > 0; k++) {
				result3[k] = rb % 2;
				rb = rb / 2;
			}
			for (j = 2; j >= 0; j--) {
				printf("%d", result3[j]);
			}
			printf("0");
		}
		else {
			int result4[4] = { 0, };
			for (k = 0; rb > 0; k++) {
				result4[k] = rb % 2;
				rb = rb / 2;
			}
			for (j = 3; j >= 0; j--) {
				printf("%d", result4[j]);
			}
		}
		printf("\n");
	}

}