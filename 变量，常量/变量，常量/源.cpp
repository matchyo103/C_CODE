#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define MAX 10
//define 定义的标识符常量
int num2 = 20;//全局变量-定义在代码块（{}）之外的变量

int main()
{
	int arr[MAX] = { 0 };
	//计算两个数的和
	int num1 ;//局部变量-定义在代码块({})之内的变量
	int num2 = 0;
	printf("%d\n", num2);
	//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
	//当局部变量和全局变量的名字相同的时候，局部变量优先使用
	//int sum = 0;//C语言语法规定，变量要定义在当前代码块的最前面
	scanf("%d %d", &num1, &num2);//取地址符号&
	printf("%d\n", num1 + num2);
	//局部变量的作用域-哪里有{}，哪里就是它的作用域
	//全局变量的作用域很大
	//未声明的标识符
	//extern声明外部源文件的符号
	extern int add;
	printf("%d\n", add);
	//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
	//全局变量的生命周期是：整个程序的生命周期。
	int num = 4;
	//3字面常量
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);
	const int num3 = 4;
	//const-常属性
	//const修饰的常变量
	//const int n = 10; n是变量，但是又有常属性，所以我们说n是常变量
	//error int arr[n] = { 0 }; //error n = 20;
	return 0;
}
//枚举常量
//枚举一一列举
//性别：男，女，保密
//三原色：红，黄，蓝
//枚举关键字-enum

//enum Sex
//{
	//MALE,
	//FEMALE,
	//SECRET,
//};
//MALE,FEMALE,SECRET-枚举常量
//int main()
//{
	//enum Sex s = FEMALE;
	//printf("%d\n", MALE);0
	//printf("%d\n", FEMALE);1
	//printf("%d\n", SECRET);2
	//return 0;
//}