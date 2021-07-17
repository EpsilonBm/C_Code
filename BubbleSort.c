#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main()
{
	int arr[10] = { 1, 15, 11, 5, 13, 3, 19, 9, 7, 17 };
	int ret = 0;
	int i = 0, j = 0;

	for (i = 9; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				ret = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ret;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	
	system("pause");

	return 0;
}
