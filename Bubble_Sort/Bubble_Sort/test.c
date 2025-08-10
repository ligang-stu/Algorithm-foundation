#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BubbleSort(int* arr, int n)
{
	int i, j;
	int tmp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main() {
	int arr[] = { 21,34,43,12,75,31,86,41 };
	int n = sizeof(arr) / sizeof(int);
	printf("≈≈–Ú«∞£∫");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	BubbleSort(arr, n);
	printf("≈≈–Ú∫Û£∫");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}