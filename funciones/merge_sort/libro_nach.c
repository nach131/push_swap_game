int merge(int arr[], int l, int m, int h)
{
	int arr1[1000], arr2[1000]; // Two temporary arrays to hold the two arrays to be merged
	int n1, n2, i, j, k;
	n1 = m - l + 1;
	n2 = h - m;
	for (i = 0; i < n1; i++)
		arr1[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		arr2[j] = arr[m + j + 1];
	arr1[i] = 9999; // To mark the end of each temporary array
	arr2[j] = 9999;
	i = 0;
	j = 0;
	for (k = l; k <= h; k++)
	{ // process of combining two sorted arrays
		if (arr1[i] <= arr2[j])
			arr[k] = arr1[i++];
		else
			arr[k] = arr2[j++];
	}
	return 0;
}
int merge_sort(int arr[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		// Divide and Conquer
		merge_sort(arr, low, mid);
		merge_sort(arr, mid + 1, high);
		// Combine
		merge(arr, low, mid, high);
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

void print_arr(int *arr, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
}

int main(int n, char **str)
{

	int arr[n - 1];
	int i = 1;
	int j = 0;
	while (i < n)
	{
		arr[j] = atoi(str[i]);
		j++;
		i++;
	}

	print_arr(arr, n - 1);

	printf("\n-----\n");

	merge_sort(arr, 1, (n - 1));

	print_arr(arr, n - 1);

	return (0);
}

// 1, 54, 5, 445, 23, 2, 7,
// 1, 2, 5, 7, 23, 54, 445
