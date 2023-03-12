#include <stdio.h>

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main()
{
	int stack1[] = {4, 7, 9, 6, 3, 5, 10, 1, 2, 8};
	int stack2[] = {3, 2, 4, 6, 0, 12};

	int n = sizeof(stack1) / sizeof(stack1[0]);
	quickSort(stack1, 0, n - 1);
	quickSort(stack2, 0, n - 1);

	printf("Stack 1: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", stack1[i]);
	}
	printf("\n");

	printf("Stack 2: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", stack2[i]);
	}
	printf("\n");

	return 0;
}
