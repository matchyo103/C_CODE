#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	for (int i = 1; i <= 10; i++)
		//初始化 判断 循环
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	printf("\n");
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//10次循环
	//10次打印
	//10个元素
	int o = 0;
	for (o; o < 10; o++)
		printf("%d\n", arr[o]);
	//面试题
	int j = 0;
	int k = 0;
	for (j = 0, k = 0; k = 0; j++, k++)
		k++;
	//判断不执行，循环0次
	return 0;
}