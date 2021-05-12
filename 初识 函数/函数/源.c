#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//函数
//f(x) = 2 * x + 1;
//f(x, y) = x + y;
int ADD(int x, int y)
//自定义函数
{
	int sum = x + y;
	return sum;
}


int main()
{
	int num1 = 10;
	int num2 = 20;
	int a = 100;
	int b = 200;
	int sum1 = 0, sum2 = 0;
	//sum1 = num1 + num2;
	//sum2 = a + b;
	sum1 = ADD(num1, num2);
	printf("%d\n", sum1);
	sum2 = ADD(a, b);
	printf("%d\n", sum2);
	return 0;
}