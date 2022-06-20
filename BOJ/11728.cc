#include<stdio.h>
int partition(int left, int right, int a);
void swap1(int i, int j, int a[]);
void quicksort(int a[], int i, int j);
int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	int a[2000000];
	int j, i;
	i = 0;
	j = A + B - 1;
	for (int k = 0; k < A + B; k++)
	{
		scanf("%d", &a[k]);
	}
	quicksort(a, i, j);
	for (int k = 0; k < A + B; k++)
	{
		printf("%d ", a[k]);
	}
	return 0;
}
void swap1(int i, int j, int a[])
{
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
int partition(int left, int right, int a[])
{
	int i, j, pivot;
	i = left;
	j = right;
	pivot = a[left];
	while (i < j)
	{
		while (pivot < a[j]) {
			j--;
		}

		while (i < j && pivot >= a[i]) {
			i++;
		}
		swap1(i, j, a);
	}

	swap1(left, i, a);
	return j;
}
void quicksort(int a[], int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int p = partition(left, right, a);
	quicksort(a, left, p - 1);
	quicksort(a, p + 1, right);
}