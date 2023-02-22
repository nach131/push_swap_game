#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_SIZE 1000

void merge(int *array, int left, int mid, int right)
{
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int L[n1 + 1], R[n2 + 1];

	for (i = 0; i < n1; i++)
	{
		L[i] = array[left + i];
	}
	for (j = 0; j < n2; j++)
	{
		R[j] = array[mid + 1 + j];
	}

	L[n1] = INT_MAX;
	R[n2] = INT_MAX;
	i = 0;
	j = 0;

	for (k = left; k <= right; k++)
	{
		if (L[i] <= R[j])
		{
			array[k] = L[i];
			i++;
		}
		else
		{
			array[k] = R[j];
			j++;
		}
	}
}

void merge_sort(int *array, int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		merge_sort(array, left, mid);
		merge_sort(array, mid + 1, right);
		merge(array, left, mid, right);
	}
}

void sort_two_stacks(int *a, int *b, int size_a, int size_b)
{
	int total_size = size_a + size_b;
	int c[MAX_SIZE];
	int i, j, k;

	for (i = 0; i < size_a; i++)
	{
		c[i] = a[i];
	}
	for (j = 0; j < size_b; j++)
	{
		c[size_a + j] = b[j];
	}

	merge_sort(c, 0, total_size - 1);

	for (k = 0; k < total_size; k++)
	{
		printf("%d ", c[k]);
	}
}

int main()
{
	int a[] = {1, 300, 5, 70, 9};
	int b[] = {2, 4, 60, 48, 10};
	int size_a = sizeof(a) / sizeof(int);
	int size_b = sizeof(b) / sizeof(int);

	sort_two_stacks(a, b, size_a, size_b);

	return 0;
}
