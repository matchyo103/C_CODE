#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	char ch[20];
	float arr2[5];
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		//下标的方式访问元素
		i++;
	}
	//arr[下标]；
	return 0;
}