#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	/*printf("c:\test\32\test.c")
	//\t-水平制表符
	//\？在书写连续多个问号时使用
	//\'用于表示字符常量'
	//\"用于表示一个字符串内部的双引号
	//\\用于表示一个反斜杠，防止它被解释位一个转义序列符
	//\32-32是2个8进制数字-相当于一个字符串
	*/   //该注释不能嵌套注释
	printf("%c\n", '\32');
	//数据在计算机上存储的时候，存储的是2进制
	//a-97 
	//A-65
	//ASCII编码
	char arr1[] = "abc";//数组
	//"abc"-'a' 'b' 'c' '\0'-'\0'字符串的结束标志，不算字符串的内容
	char arr2[] = { 'a', 'b', 'c' };
	//'\0'-0
	//'a'-97
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));
	//strlen-string length-计算字符串长度的
	printf("%d\n", strlen(arr2));
	//char字符串类型
	//"hello bit"
	//"";空字符串
	printf("%d\n", strlen("c:\test\32\test.c"));//13
	return 0;
}