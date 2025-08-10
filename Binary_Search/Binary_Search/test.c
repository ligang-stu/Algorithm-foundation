#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int BinarySearch(int* arr, int n, int target)
{
	int start = 0;
	int end = n - 1;
	int mid;
	do {
		mid = (start + end) / 2;
		if (target == arr[mid])
			return mid + 1;
		else if (target > arr[mid])
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	} while (start <= end);

	return -1;
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(arr) / sizeof(int);
	int target;
	printf("请输入你要查找的元素：");
	scanf("%d", &target);
	int pos = BinarySearch(arr, n, target);
	printf("你要查找的元素在数组中第%d个位置", pos);
	return 0;
}