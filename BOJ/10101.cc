#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int input[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &input[i]);
	}
	sort(input, input + 3);
	string result = "Scalene";
	if (input[0] == input[1] && input[1] == input[2])
		result = "Equilateral";
	else if (input[0] == input[1] || input[1] == input[2])
		result = "Isosceles";
	if (input[0] + input[1] + input[2] != 180)
		result = "Error";
	cout << result;
}