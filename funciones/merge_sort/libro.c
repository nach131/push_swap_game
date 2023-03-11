int merge(int arr[], int l, int m, int h)
{
	int arr1[10], arr2[10]; // Two temporary arrays to hold the two arrays to be merged
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

int main(void)
{
	int arr[] = {1, 54, 5, 445, 23, 2, 7};

	int i = 0;

	while (i < 7)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
	merge_sort(arr, 1, 6);
	i = 0;
	while (i < 7)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}

// 1, 54, 5, 445, 23, 2, 7,
// 1, 2, 5, 7, 23, 54, 445
