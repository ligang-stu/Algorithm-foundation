#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  OrderSearch(int* arr, int n, int target)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == target) {
			return i + 1;
		}
	}
	return -1;
}
int main() {
	int arr[] = { 1,4,2,6,8,3,9,12,7,36 };
	int n = sizeof(arr) / sizeof(int);
	int target;
	printf("请输入你要查找的元素：");
	scanf("%d", &target);
	int pos = OrderSearch(arr, n, target);
	printf("你要查找的元素在数组中第%d个位置", pos);
	return 0;
}