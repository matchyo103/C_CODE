#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//结构体-我们自己创造出来的一种类型
//人-书-复杂对象-结构体
//名字-身高-年龄-身份号码
//书名-作者-出版社-定价-书号
//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b= {"C语言程序设计", 55};
	struct Book* pb = &b;
	//利用pb打印出我的书名和价格
	//. 结构体变量.成员
	//->结构体指针->成员
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("书名:%s\n", b.name);
	printf("价格:%d元\n", b.price);
	b.price = 150;
	printf("修改后的价格:%d元\n", b.price);
	strcpy(b.name, "C++");//strcpy-string copy-字符串拷贝-需引入库函数-string.h
	printf("修改后的书名:%s\n", b.name);
	return 0;
}