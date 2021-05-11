#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int line = 0;
	while (line <= 20000)
	{

		printf("敲一行代码  行数%d\n", line);
		line++;
	}
	if(line>= 20000)
	printf("好offer\n");
	return 0;
}