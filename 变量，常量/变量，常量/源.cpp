#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define MAX 10
//define ����ı�ʶ������
int num2 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���

int main()
{
	int arr[MAX] = { 0 };
	//�����������ĺ�
	int num1 ;//�ֲ�����-�����ڴ����({})֮�ڵı���
	int num2 = 0;
	printf("%d\n", num2);
	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������ʹ��
	//int sum = 0;//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	scanf("%d %d", &num1, &num2);//ȡ��ַ����&
	printf("%d\n", num1 + num2);
	//�ֲ�������������-������{}�������������������
	//ȫ�ֱ�����������ܴ�
	//δ�����ı�ʶ��
	//extern�����ⲿԴ�ļ��ķ���
	extern int add;
	printf("%d\n", add);
	//�ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ�����
	//ȫ�ֱ��������������ǣ�����������������ڡ�
	int num = 4;
	//3���泣��
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);
	const int num3 = 4;
	//const-������
	//const���εĳ�����
	//const int n = 10; n�Ǳ������������г����ԣ���������˵n�ǳ�����
	//error int arr[n] = { 0 }; //error n = 20;
	return 0;
}
//ö�ٳ���
//ö��һһ�о�
//�Ա��У�Ů������
//��ԭɫ���죬�ƣ���
//ö�ٹؼ���-enum

//enum Sex
//{
	//MALE,
	//FEMALE,
	//SECRET,
//};
//MALE,FEMALE,SECRET-ö�ٳ���
//int main()
//{
	//enum Sex s = FEMALE;
	//printf("%d\n", MALE);0
	//printf("%d\n", FEMALE);1
	//printf("%d\n", SECRET);2
	//return 0;
//}