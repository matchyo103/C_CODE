#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//移（2进制）位操作符
	//<<左移
	//>>右移
	int a = 1;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	//计算的是变量/类型所占空间的大小，单位是字节
	//整形1占4个字节-32bit位
	//00000000000000000000001
	a << 1;
 //0//00000000000000000000010
	//左边丢弃，右边补零
	int b = a << 1;
	printf("%d\n", b);
	printf("%d\n", a);
	//对a进行左移或右移都不会改变a的值
	//int a = 5 % 2;//取模
	//printf("%d\n", a);
	//（2进制)位操作
	//&按位与
	//|按位或
	//^按位异或
	//异或的计算规律：
	//对应的二进制位相同，则为0
    //对应的二进制位相异，则为1
	int c = 10;
	c = 20;//= 赋值  ==判断相等
	c = c + 10;
	c += 10;//复合赋值符
	//+=  -=  *=  /=  %=  >>=  <<=   &=  |=  ^=
	
	//单目操作符
	//双目操作符
	//三目操作符
	int e = 10;
	int d = 20;
	//a + b;// + 双目操作符
	//C语言中0-假，非0-真

	int arr[10] = { 0 };
	int sz = 0;
	printf("%d\n", sizeof(arr));
	//计算数组的元素个数
	//个数 = sizeof(arr)/sizeof(arr[0])
	printf("sz = %d\n", sizeof(arr) / sizeof(arr[0]));

	return 0;
}