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

	int low = start + 1;  //���������ұȻ�׼�������
	int high = end-1;		  //���������ұȻ�׼�������
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
	//ǰ�벿��
	QuickSort(arr, start, high-1);
	//��벿��
	QuickSort(arr, high+1, end);

}
int main() {
	int arr[] = { -2,35,12,67,32,89,21,43,-5,39 };
	int len = sizeof(arr) / sizeof(int);
	printf("����ǰ��");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	QuickSort(arr, 0,len);
	printf("�����");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}