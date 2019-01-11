#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int **data = new int*[n];
	for (int i = 0; i < n; i++)
		data[i] = new int[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> data[i][j];

	int k, i, j, x, y;
	cin >> k;
	while (k--)
	{
		int sum = 0;
		cin >> i >> j >> x >> y;
		for (int a = i - 1; a < x; a++)
		{
			for (int b = j - 1; b < y; b++)
			{
				sum += data[a][b];
			}
		}
		cout << sum << endl;
	}

	for (int i = 0; i < n; i++)
		delete[] data[i];
	delete[] data;

	return 0;
}