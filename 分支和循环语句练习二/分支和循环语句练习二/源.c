#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算 1!+ 2!+ 3!+ …… + 10!
int main()
{
	int m = 0, n = 0;
	int ret = 1;
	int sum = 0;
	printf("计算 1!+ 2!+ 3!+ …… + 10!\n");
	for (n = 1; n <= 10; n++)
	{
		ret = 1;
		for(m = 1; m <= n; m++ )
		{
			ret = ret  * m;
		}
		sum += ret;
	}
	printf("结果为%d", sum);

	return 0;
}