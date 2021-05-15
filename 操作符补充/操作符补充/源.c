#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{ 
	int a = 10;
	int b = a++;/*先使用，后++ b10 a11*/
	int c = ++a;/*先++,后使用 a12 c12*/
	int d = a--;/*先使用,后-- d12 a11*/
	int e = --a;/*先--，后使用 a10 e10*/
	printf("%d %d %d %d\n", b, c, d, e);
	int a1 = (int)3.14;//double-->int强制类型转换
	/*真 - 非0
	假 - 0
	&& - 逻辑与
	|| - 逻辑或*/
	int a2 = 3;
	int b2 = 5;
	int c2 = a && b;
	int d2 = a || b;
	printf("%d %d\n", c2, d2);
	int f = 10;
	int g = 20;
	int max = 0;
	max = (a > b ? f : g);
	printf("%d\n", max);
	/*int Add()
	{

	}
	int sum = Add();--函数调用操作符*/
	//& * . ->
	/*只要是整数，内存中存储的都是二进制的补码
    正数--原码，反码，补码相同
	原码--直接按照正负，写出的二进制序列
    反码--原码的符号位变，其他位取反得到
	补码--反码+1*/
	return 0;
}