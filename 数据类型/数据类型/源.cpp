#define _CRT_SECURE_NO_WARNINGS 1
//char        //字符数据类型
//short       //短整型
//int         //整形
//long        //长整型
//long long   //更长的整形
//float       //单精度浮点数
//double      //双精度浮点数

#include<stdio.h>

int main()
{
	//char ch = 'A';//内存
	//printf("%c\n", ch);//%c-打印字符格式的数据
	//short int-短整型
	//long-长整型
	//int age = 20;
	//printf("%d\n", age);//%d-打印整型十进制数据
	//float f = 5.0;
	//printf("%f\n", f);//%f-打印浮点型数据
	//double d = 3.14;
	//printf("%lf\n", d);
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4/8
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	printf("%d\n", sizeof(long double));
	return 0;
	//计算机中单位
	//bit-比特位-存放一个二进制位
	//byte-字节
	//一个字节 = 8个比特位的大小
	//short age = 20; 向内存申请2个字节 = 16bit位，用来存放20
	//float weight = 95.6f; 向内存申请4个字节，存放小数
}