#define _CRT_SECURE_NO_WARNINGS 1
//char        //�ַ���������
//short       //������
//int         //����
//long        //������
//long long   //����������
//float       //�����ȸ�����
//double      //˫���ȸ�����

#include<stdio.h>

int main()
{
	//char ch = 'A';//�ڴ�
	//printf("%c\n", ch);//%c-��ӡ�ַ���ʽ������
	//short int-������
	//long-������
	//int age = 20;
	//printf("%d\n", age);//%d-��ӡ����ʮ��������
	//float f = 5.0;
	//printf("%f\n", f);//%f-��ӡ����������
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
	//������е�λ
	//bit-����λ-���һ��������λ
	//byte-�ֽ�
	//һ���ֽ� = 8������λ�Ĵ�С
	//short age = 20; ���ڴ�����2���ֽ� = 16bitλ���������20
	//float weight = 95.6f; ���ڴ�����4���ֽڣ����С��
}