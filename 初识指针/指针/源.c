#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 10;//4���ֽ�
	//&a;//ȡ��ַ
	int* p = &a;
	//��һ�ֱ�����������ŵ�ַ��--ָ�����
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;//*--�����ò�����--��ӷ��ʲ�����
	printf("%d\n", a);
	printf("%d\n", sizeof(p));
	//double d = 3.14;
	//double* pd = &d;
	//*pd = 5.5;
	return 0;
}