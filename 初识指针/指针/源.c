#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 10;//4个字节
	//&a;//取地址
	int* p = &a;
	//有一种变量是用来存放地址的--指针变量
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;//*--解引用操作符--间接访问操作符
	printf("%d\n", a);
	printf("%d\n", sizeof(p));
	//double d = 3.14;
	//double* pd = &d;
	//*pd = 5.5;
	return 0;
}