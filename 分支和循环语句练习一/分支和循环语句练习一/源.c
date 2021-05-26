#define _CRT_SECURE_NO_WARNINGS 1
//计算 n的阶乘。
#include<stdio.h>

int main()
{
	int m = 0,n = 0;
	printf("请输入目标值:\n");
	scanf("%d", &m);
	printf("计算%d的阶乘\n", m);
	int ret = 1;
	for (n = 1; n <= m; n++)
	{
		ret = ret * n;
	}
	printf("%d\n", ret);
	return 0;
}