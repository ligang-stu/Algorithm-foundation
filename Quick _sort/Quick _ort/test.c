#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int*a,int *b) 
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void QuickSort(int* arr, int start, int end)
{
	if (start >= end)
	{
		return 1;
	}

	int low = start + 1;  //从左往右找比基准大的数组
	int high = end-1;		  //从右往左找比基准大的数组
	while (1)
	{
		while (low < end)
		{
			if (arr[low] > arr[start])
			{
				break;
			}
			low++;
		}
		while (high > start)
		{
			if (arr[high] < arr[start])
			{
				break;
			}
			high--;
		}
		if (low < high)
		{
			swap(arr + low, arr + high);
		}
		else
			break;
	}
	swap(arr+start,arr+high);
	//前半部分
	QuickSort(arr, start, high-1);
	//后半部分
	QuickSort(arr, high+1, end);

}
int main() {
	int arr[] = { -2,35,12,67,32,89,21,43,-5,39 };
	int len = sizeof(arr) / sizeof(int);
	printf("排序前：");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	QuickSort(arr, 0,len);
	printf("排序后：");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}