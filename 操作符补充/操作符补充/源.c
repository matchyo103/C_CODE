#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{ 
	int a = 10;
	int b = a++;/*��ʹ�ã���++ b10 a11*/
	int c = ++a;/*��++,��ʹ�� a12 c12*/
	int d = a--;/*��ʹ��,��-- d12 a11*/
	int e = --a;/*��--����ʹ�� a10 e10*/
	printf("%d %d %d %d\n", b, c, d, e);
	int a1 = (int)3.14;//double-->intǿ������ת��
	/*�� - ��0
	�� - 0
	&& - �߼���
	|| - �߼���*/
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
	int sum = Add();--�������ò�����*/
	//& * . ->
	/*ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
    ����--ԭ�룬���룬������ͬ
	ԭ��--ֱ�Ӱ���������д���Ķ���������
    ����--ԭ��ķ���λ�䣬����λȡ���õ�
	����--����+1*/
	return 0;
}