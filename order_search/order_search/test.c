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
	printf("��������Ҫ���ҵ�Ԫ�أ�");
	scanf("%d", &target);
	int pos = OrderSearch(arr, n, target);
	printf("��Ҫ���ҵ�Ԫ���������е�%d��λ��", pos);
	return 0;
}